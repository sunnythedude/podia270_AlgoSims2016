#pragma once

#include "ofMain.h"

class MyBall {

public:

	MyBall();

	void update();
	void draw();

	ofPoint position;
	ofVec2f velocity;

};