#include<GL/glut.h>
#include<iostream>

void drawnLine(int x0, int y0, int x1, int y1) 
{
	glLineWidth(1.0);
	glBegin(GL_LINES);
	glVertex2i(x0, y0);
	glVertex2i(x1, y1);
	glEnd();
}

void display() 
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0, 1.0, 1.0); //Blanco
	drawnLine(10, 10, 200, 200);

	glFinish();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("CASO PRACTICO 2");
	glClearColor(0.0, 0.0, 0.0, 0.0); //Negro
	gluOrtho2D(0, 400, 0, 400); //Establece coordenadas
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;

}