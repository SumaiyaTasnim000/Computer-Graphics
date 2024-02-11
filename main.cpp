#include <windows.h>
#include <GL/glut.h>




void mydisplay() {
	glClearColor(1.0,1.0,1.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(5.0);

glBegin(GL_LINES);

    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(1.0,0.0);
    glVertex2f(-1.0,0.0);
    glVertex2f(0.0,1.0);
    glVertex2f(0.0,-1.0);
    glEnd();


glBegin(GL_LINES);

    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(-0.8,0.2);
    glVertex2f(-0.7,0.8);
    glVertex2f(-0.7,0.8);
    glVertex2f(-0.5,0.5);
    glVertex2f(-0.5,0.5);
    glVertex2f(-0.3,0.8);
    glVertex2f(-0.3,0.8);
    glVertex2f(-0.2,0.2);
    glEnd();


glBegin(GL_LINES);

    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.3,0.5);
    glVertex2f(0.5,0.8);
    glVertex2f(0.5,0.8);
    glVertex2f(0.7,0.5);
    glVertex2f(0.7,0.5);
    glVertex2f(0.5,0.2);
    glVertex2f(0.5,0.2);
    glVertex2f(0.3,0.5);
    glEnd();

glBegin(GL_LINES);

    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.7,-0.5);
    glVertex2f(-0.2,-0.2);
    glEnd();

glBegin(GL_LINES);

    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.2,-0.5);
    glVertex2f(0.5,-0.2);
    glVertex2f(0.5,-0.2);
    glVertex2f(0.7,-0.5);
    glVertex2f(0.7,-0.5);
    glVertex2f(0.2,-0.5);
    glEnd();

glFlush();


}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("First Lab");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(mydisplay);
	glutMainLoop();
}


