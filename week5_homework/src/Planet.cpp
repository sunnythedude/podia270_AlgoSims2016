#include "Planet.h"

void Planet::setup() {
	planetGroup.add(rotateSpeed.set("speed", 1.0, 0.0, 9.0));
	planetGroup.add(posX.set("X", 0, 0, 600));
	planetGroup.add(posY.set("Y", 0, 0, 600));

	planetGroup.add(red.set("red", 255, 0, 255));
	planetGroup.add(green.set("green", 255, 0, 255));
	planetGroup.add(blue.set("blue", 255, 0, 255));

	planetGroup.add(radius.set("radius", 100, 10, 300));
}

void Planet::update() {
	rotation++;
}

void Planet::draw() {
	ofSetColor(red, green, blue);
	ofRotate(rotation * rotateSpeed);
	ofCircle(posX, posY, radius);
}