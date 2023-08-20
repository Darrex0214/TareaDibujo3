#include "Cola.h"


void Cola::DibujarCola(float angulo,float x, float y, float z,int n) {



	glPushMatrix();
	glTranslatef(-0.5, 0.0, 0.0);
	glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
	glTranslatef(0.5, 0.0, 0.0);
	glPushMatrix();
	glScalef(1.0, 0.4, 1.0);
	glutSolidCube(1.0);
	glPopMatrix();


	for (int i = 0; i < n; i++) 
	{
		glTranslatef(0.5, 0.0, 0.0);
		glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
		glTranslatef(0.5, 0.0, 0.0);
		glPushMatrix();
		glScalef(1.0, 0.4, 1.0);
		glutSolidCube(1.0);
		glPopMatrix();
	}
	glPopMatrix();
}


void Cola::DibujarEspiral(float angulo, float x, float y, float z, int n) 

{

	glPushMatrix();
	glTranslatef(-0.5, 0.0, 0.0);
	glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
	glTranslatef(0.5, 0.0, 0.0);
	glPushMatrix();
	glScalef(1.0, 0.4, 1.0);
	glutSolidSphere(1.0, 11, 5);
	glPopMatrix();


	for (int i = 0; i < n; i++)
	{
		glTranslatef(0.5, 0.0, 1.5);
		glRotatef((GLfloat)angulo, 0.0, 0.0, 1.0);
		glTranslatef(0.5, 0.0, 0.0);
		glPushMatrix();
		glScalef(1.0, 0.4, 1.0);
		glutSolidSphere(1, 11, 5);
		glPopMatrix();
	}
	glPopMatrix();




}