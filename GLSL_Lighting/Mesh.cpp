#include "Mesh.h"

Mesh::Mesh() {
};

void Mesh::DrawTriangle(float x, float y, float z, float size, float rotation)
{
	glPushMatrix();
		glRotatef(rotation * 360, 0, 1.0f, 0);
		glTranslatef(x, y, z);
		glBegin(GL_TRIANGLES);
		glVertex3f(size, 0, 0);
		glVertex3f(0, size, 0);
		glVertex3f(-size, 0, 0);

		glEnd();
	glPopMatrix();

};

void Mesh::DrawTeapot(float x, float y, float z, float size, float rotation)
{
	glPushMatrix();
	//glRotatef(timer010 * 360, 0.5, 1.0f, 0.1f);
	glTranslatef(x, y, z);
	glutSolidTeapot(size);
	glPopMatrix();

};

void Mesh::DrawCube(float x, float y, float z, float size, float angle)
{
	glPushMatrix();
	glRotatef(angle,0,0,1.0);
	glTranslatef(x, y, z);
	glutSolidCube(size);
	glPopMatrix();

};

Mesh::~Mesh() {};

