#ifndef _BOID
#define _BOID

#include "ofMain.h" 

#pragma once
class Boid
{

public:

	Boid(glm::vec3 p);
	void update();
	void draw();

	glm::vec3 vel;

	ofNode butterfly;
	ofBoxPrimitive lWing;
	ofBoxPrimitive rWing;

private:
};

#endif