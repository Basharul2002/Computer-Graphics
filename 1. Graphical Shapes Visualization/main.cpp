/// Draw Sample Points

#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display()
{
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to white and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glPointSize(5.0);

	// Middle line
     glBegin(GL_LINES);              // Each set of 4 vertices form a quad
        glColor3f(1.0f, 0.0f, 0.0f); // Red
        glVertex2f(0.0f, 1.0f);    // x, y
        glVertex2f(0.0f, -1.0f);
        glVertex2f(1.0f, 0.0f);    // x, y
        glVertex2f(-1.0f, 0.0f);
	 glEnd();


	 // Triangle
	 glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.2, 0.2);
        glVertex2f(-0.8, 0.2);
        glVertex2f(-0.5, 0.8);
	 glEnd();


	 // Hexagon
	  glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.5, 0.27);
        glVertex2f(0.3, 0.4);
        glVertex2f(0.3, 0.6);
        glVertex2f(0.5, 0.73);
        glVertex2f(0.7, 0.6);
        glVertex2f(0.7, 0.4);
	 glEnd();


	 // Ractanguler
	  glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(-0.2, -0.2);
        glVertex2f(-0.8, -0.2);
        glVertex2f(-0.8, -0.8);
        glVertex2f(-0.2, -0.8);
	 glEnd();


	 // Traiangle
	 glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex2f(0.5, -0.2);
        glVertex2f(0.4, -0.8);
        glVertex2f(0.6, -0.8);
    glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv)
{
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(500, 500);   // Set the window's initial width & height
	glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

