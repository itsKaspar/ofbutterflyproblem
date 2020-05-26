#include "ofApp.h"


ofApp::ofApp() {
}
ofApp::~ofApp() {
}
//--------------------------------------------------------------
void ofApp::setup() {
	//boids.push_back(Boid(glm::vec3(ofGetWidth()/2, ofGetWidth() / 2,0)));
//}
	boid = new Boid(glm::vec3(-ofGetWidth() / 2, 0,0));
}
//--------------------------------------------------------------
void ofApp::update() {
	//for (size_t i = 0; i < boids.size(); i++)
	//{
	boid->update();
	//}

}

//--------------------------------------------------------------
void ofApp::draw() {
	//for (size_t i = 0; i < boids.size(); i++)
	//{
	boid->draw();
	//}
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
