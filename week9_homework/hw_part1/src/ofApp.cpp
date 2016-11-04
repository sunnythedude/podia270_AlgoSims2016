#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255, 255, 255);

	ofSetColor(0, 0, 0);
	float time = ofGetElapsedTimef();
	for (int i = 0; i<100; i++) {
		float ampX = ofGetWidth();
		float ampY = ofGetHeight();
		float speed = 0.001;
		float posX = i * 104.3 + 14.6;
		float posY = i * 53.3 + 35.2;

		//Get x and y using Perlin noise
		float x = ampX * ofNoise(time + speed * posX - ampX);
		float y = ampY * ofNoise(time + speed * posY - ampY);
		ofCircle(x, y, ofRandom(5,10));
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
