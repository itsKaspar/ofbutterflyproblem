#include "Boid.h"

Boid::Boid(glm::vec3 p) {
	vel = glm::vec3(0.1, 0.1, 0.1);

	butterfly.move(p);

	lWing.setParent(butterfly);
	rWing.setParent(butterfly);
	lWing.move(-110, 0,0);
	rWing.move(110, 0, 0);
}

void Boid::update() {
	butterfly.move(vel);
}

void Boid::draw() {
	butterfly.draw();

	rWing.draw();
	lWing.draw();
}
