#ifndef _BOID
#define _BOID

#include "ofMain.h" 

#pragma once
class Boid
{

public:

	Boid();
	~Boid();
	Boid(glm::vec3 p);
	void update();
	void draw();

	glm::vec3 pos;
	glm::vec3 vel;

	ofNode butterfly;
	ofPlanePrimitive lWing;
	ofPlanePrimitive rWing;

	ofEasyCam cam;

private:
};

#endif
