#pragma once
#ifndef __PERSPECTIVECAMERA__
#define __PERSPECTIVECAMERA__

#include "Camera.h"
#include "GL/glut.h"
class PerspectiveCamera : public Camera {
	double _fovy;
	double _aspect;
public:
	PerspectiveCamera();
	PerspectiveCamera(double fovy,double aspect, double zNear, double zFar);
	~PerspectiveCamera();
	void update(GLsizei w, GLsizei h);
	void computeProjectionMatrix();
	void computeVisualizationMatrix();
};


#endif