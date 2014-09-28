#include "stdafx.h"
#include "Roadside.h"
#include "GL/GLUT.h"

Roadside::Roadside(){}
Roadside::~Roadside(){}
void Roadside::draw(){
	glPushMatrix();
	glColor3f(0.7, 0.7, 0.7);
	glTranslated(0, getPosition()->getY(), 1);
	glScalef(400, 20, 1);
	glutSolidCube(1);
	glPopMatrix();
}