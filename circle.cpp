#include "circle.h"

circle::circle() {
	catchUpSpeed = 0.1;
}

void circle::draw() {

	ofFill();
	ofSetColor(0, 0, 255);
	ofSetCircleResolution(100);
	ofRectRounded(pos.x, pos.y, 30, 30, 30);
}

void circle::xenoToPoint(float catchX, float catchY) {

	pos.x = catchUpSpeed * catchX + (1 - catchUpSpeed) *pos.x;
	pos.y = catchUpSpeed * catchY + (1 - catchUpSpeed) *pos.y;

} 