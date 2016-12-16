#include "particle.h"

Particle::Particle(ofVec2f _pos) {
	pos.set(_pos);
	vel.x = ofRandom(-6, 6);
	vel.y = ofRandom(-7, -15);
	//lifespan = (253, 239, 194);
}

void Particle::setup() {

}

void Particle::resetForces() {
	acc *= 0;
}

void Particle::applyForce(ofVec2f force) {
	acc += force;
}

void Particle::update() {
	vel += acc;
	pos += vel;

	//if (lifespan > 0) lifespan -= 3.0;
}

void Particle::draw() {
	ofSetColor(204, 245, 255);
	ofCircle(pos, 5);
}