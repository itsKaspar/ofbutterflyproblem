#include "Boid.h"

Boid::Boid() {
}
Boid::~Boid() {
}

Boid::Boid(glm::vec3 p) {

	vel = glm::vec3(1, 0,0);
	pos = p;
	butterfly.move(p);

	glm::vec3 wingSize(100, 100, 0);

	lWing.setParent(butterfly);
	rWing.setParent(butterfly);

	lWing.set(wingSize.x, wingSize.y, 2, 2);
	rWing.set(wingSize.x, wingSize.y, 2, 2);

	glm::vec3 rWingOffset(100, 100, 0);

	//move all the vertices so these start at 0,0
	for (auto&v : rWing.getMesh().getVertices())
	{
		v += rWingOffset / 2.0;
	}

	glm::vec3 lrWingOffset(100, -100, 0);

	//move all the vertices so these start at 0,0
	for (auto&v : lWing.getMesh().getVertices())
	{
		v += lrWingOffset / 2.0;
	}

}

void Boid::update() {
	pos += vel;
	butterfly.move(vel);
	butterfly.lookAt(butterfly.getGlobalPosition() + vel);

	auto rWingOffset = glm::vec3(0, 60, 0);

	lWing.setOrientation(glm::angleAxis(ofMap(sin(ofGetElapsedTimef()), -1, 1, -PI * 0.25, PI*0.25), glm::vec3(1, 0, 0)));
	rWing.setOrientation(glm::angleAxis(ofMap(sin(ofGetElapsedTimef()), -1, 1, PI * 0.25, -PI*0.25), glm::vec3(1, 0, 0)));
}

void Boid::draw() {

	cam.begin();

	ofDrawCircle(500, 100, 0, 5);

	butterfly.draw();

	rWing.draw();
	lWing.draw();

	cam.end();
}
