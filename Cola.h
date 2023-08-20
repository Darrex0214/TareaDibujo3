#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include <iostream>
#include "glsl.h"
#include <time.h>


class Cola
{
public:

	GLfloat angulo;
	Cola() {};
	void DibujarCola(float angulo, float x, float y, float z,int n);
	void DibujarEspiral(float angulo, float x, float y, float z, int n);
	
};

