#include "stdafx.h"
#include "River.h"
#include "GL/GLUT.h"

River::River(){}
River::~River(){}
void River::draw(){
	glPushMatrix();
		glTranslated(0, getPosition()->getY(), 1);
		glColor3f(0, 0, 1);
		glScalef(400, 60, 1);
		glutSolidCube(1);
	glPopMatrix();
}