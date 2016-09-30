#pragma once

#include "ofMain.h"

class circle {

public: 

	circle();
	void draw();

	void xenoToPoint(float catchX, float catchY);

	ofPoint pos;

	float catchUpSpeed;
};