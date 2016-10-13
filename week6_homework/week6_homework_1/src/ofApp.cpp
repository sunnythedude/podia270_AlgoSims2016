#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	for (int i = 0; i < 50; i++) {
		Particle temp;

		temp.setInit(ofPoint(ofRandom(ofGetWidth()), ofRandom(ofGetHeight())));

		temp.color = ofColor(ofRandom(0, 255), ofRandom(0, 255), ofRandom(0, 255));

		cars.push_back(temp);
	}

	dest = ofPoint(ofRandomWidth(), ofRandomHeight());
}

//--------------------------------------------------------------
void ofApp::update(){
	dest = ofVec2f(ofRandomWidth(), ofRandomHeight());

	for (int i = 0; i < 50; i++)
	{
		cars[i].seek(dest);

		float area = 45;
		for (int j = 0; j < cars.size(); j++) {
			if (i == j) {
				continue;
			}

			if (cars[i].getPosition().distance(cars[j].getPosition()) < area) {

				cars[i].addRepulsionForce(cars[j].getPosition(), area, 0.025);
				cars[j].addRepulsionForce(cars[i].getPosition(), area, 0.025);

			}
		}

		cars[i].update();
	}
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(0, 255, 0);
	ofSetColor(255, 0, 0);
	ofCircle(dest, 4);

	for (int i = 0; i < cars.size(); i++)
	{
		ofSetColor(cars[i].color);
		cars[i].draw();
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
