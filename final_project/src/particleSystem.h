#pragma once

#include "ofMain.h"
#include "particle.h"

class particleSystem {
public:

	particleSystem(ofVec2f _pos);
	void update(ofVec2f _force);
	void draw();

	vector<Particle> particleList;
	ofVec2f pos;

};