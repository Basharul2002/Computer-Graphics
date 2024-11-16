#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void renderBitmapString(float x, float y, float z, void *font, char *string) {
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
        glutBitmapCharacter(font, *c);

}

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glPointSize(5.0);

    // Axis
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex2f(0.0f, -1.0f);
        glVertex2f(0.0f, 1.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);
        glColor3f(1.0f, 0.0f, 0.0f); // Red color

        glVertex2f(-0.85f, 0.1f);   // Top Left
        glVertex2f(-0.6f, 0.1f);   // Top Middle
        glVertex2f(-0.5f, 0.3f);   // Top Peak

        glVertex2f(-0.4f, 0.1f);   // Top Right
        glVertex2f(-0.15f, 0.1f);   // Mid-Right
        glVertex2f(-0.35f, 0.0f);  // Inner Right

        glVertex2f(-0.28f, -0.18f);  // Bottom Right
        glVertex2f(-0.5f, -0.038f); // Bottom Middle
        glVertex2f(-0.72f, -0.18f);  // Bottom Left

        glVertex2f(-0.65f, 0.0f);   // Inner Bottom Left
    glEnd();


    glBegin(GL_TRIANGLE_FAN);
        glColor3f(1.0f, 0.0f, 0.0f); // Red color

        // Central vertex (fan center)
        glVertex2f(0.5f, 0.1f);

        // Outer vertices defining the shape
        glVertex2f(0.15f, 0.1f);   // Top Left
        glVertex2f(0.4f, 0.1f);    // Top Middle
        glVertex2f(0.5f, 0.3f);    // Top Peak
        glVertex2f(0.6f, 0.1f);    // Top Right
        glVertex2f(0.85f, 0.1f);   // Mid-Right
        glVertex2f(0.65f, 0.0f);   // Inner Right
        glVertex2f(0.72f, -0.18f); // Bottom Right
        glVertex2f(0.5f, -0.038f); // Bottom Middle
        glVertex2f(0.28f, -0.18f); // Bottom Left
        glVertex2f(0.35f, 0.0f);   // Inner Bottom Left
        glVertex2f(0.15f, 0.1f);   // Close the fan
    glEnd();




    glFlush(); // Render now........
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 800); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Star"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
