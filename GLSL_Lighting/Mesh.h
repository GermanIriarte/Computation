#pragma once
#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"

class Mesh
{
public:
	Mesh();
	void DrawTriangle(float x, float y, float z, float size, float rotation);
	void DrawCube(float x, float y, float z, float size, float rotation);
	void DrawTeapot(float x, float y, float z, float size, float rotation);

	~Mesh();
};

