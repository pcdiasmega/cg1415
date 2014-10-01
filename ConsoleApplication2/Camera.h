#pragma once

#ifndef __CAMERA__
#define __CAMERA__

#include "Vector3.h"
#include "Entity.h"
#include "GL/glut.h"

class Camera : public Entity {
	Vector3 _up;
	Vector3 _at;
	double _near;
	double _far;
public:
	Camera(double near, double far);
	~Camera();
	double getNear();
	double getFar();
	virtual void update(GLsizei w, GLsizei h) = 0;
	virtual void computeProjectionMatrix() = 0;
	virtual void computeVisualizationMatrix() = 0;
};
#endif