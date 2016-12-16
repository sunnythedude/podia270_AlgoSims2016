#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	image.load("game_bg.png");

	ofSetVerticalSync(true);
	//ofBackgroundHex(0xfdefc2);
	ofSetLogLevel(OF_LOG_NOTICE);

	box2d.init();
	box2d.setGravity(0, 20);
	box2d.createBounds();
	box2d.setFPS(60.0);
	box2d.registerGrabbing();

	gravity.set(0, 0.2);
}

//--------------------------------------------------------------
void ofApp::update() {
	box2d.update();

	for (int i = 0; i < systems.size(); i++) {
		systems[i].update(gravity);
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	image.draw(ofGetWidth() - 1024, ofGetHeight() - 768, 1024, 768);

	for (int i = 0; i<circles.size(); i++) {
		ofFill();
		ofSetHexColor(0x42cef4);
		circles[i].get()->draw();
	}

	for (int i = 0; i < systems.size(); i++) {
		systems[i].draw();
	}
	// draw the ground
	box2d.drawGround();

	
	string info = "";
	info += "Press C to pour water\n\n";
	info += "Drag Bubbles to splash the water\n\n";
	info += "Press V for a fountain\n\n";
	//info += "Press [b] for blocks\n";
	//info += "Total Bodies: " + ofToString(box2d.getBodyCount()) + "\n";
	//info += "Total Joints: " + ofToString(box2d.getJointCount()) + "\n\n";
	//info += "FPS: " + ofToString(ofGetFrameRate(), 1) + "\n";
	//ofSetHexColor(0x444342);
	ofSetColor(255, 255, 26);
	ofDrawBitmapString(info, 30, 230);
	ofSetColor(255);
	
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

	if (key == 'c') {
		float r = ofRandom(4, 20);
		circles.push_back(shared_ptr<ofxBox2dCircle>(new ofxBox2dCircle));
		circles.back().get()->setPhysics(3.0, 0.53, 0.1);
		circles.back().get()->setup(box2d.getWorld(), mouseX, mouseY, r);
	}

	if (key == 'v') {
		particleSystem system(ofVec2f(mouseX, mouseY));
		systems.push_back(system);
	}

	//if (key == 't') ofToggleFullscreen();
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::resized(int w, int h) {

}
