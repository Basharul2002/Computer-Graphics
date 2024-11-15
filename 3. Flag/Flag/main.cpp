#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
        glutBitmapCharacter(font, *c);

}

void display()
{
    glClearColor(0.3f, 0.3f, 0.3f, 0.3f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glPointSize(5.0);

    // Axis
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(1.0f, 0.0f);
        glVertex2f(-1.0f, 0.0f);
        glVertex2f(0.0f, -1.0f);
        glVertex2f(0.0f, 1.0f);
    glEnd();

    // 1st quadrant: Flag of Sudan
    // Top Rectangle
    glBegin(GL_POLYGON);
        glColor3ub(255, 0, 0);
        glVertex2f(0.2f, 0.61f);
        glVertex2f(0.2f, 0.76f);
        glVertex2f(0.7f, 0.76f);
        glVertex2f(0.7f, 0.6f);
    glEnd();

    // Second/ Middle rectangle
    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255);
        glVertex2f(0.2f, 0.38f);
        glVertex2f(0.2f, 0.61f);
        glVertex2f(0.7f, 0.61f);
        glVertex2f(0.7f, 0.38f);
    glEnd();


    // 3rd/ last rectangle
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 0);
        glVertex2f(0.2f, 0.25f);
        glVertex2f(0.2f, 0.38f);
        glVertex2f(0.7f, 0.38f);
        glVertex2f(0.7f, 0.25f);
    glEnd();

    // Triangle
    glBegin(GL_POLYGON);
        glColor3ub(0, 160, 0);
        glVertex2f(0.2f, 0.25f);
        glVertex2f(0.2f, 0.76f);
        glVertex2f(0.4f, 0.5f);
    glEnd();

    // 2nd Quadrant: Flag of Somalia
    // Main Rectangle (Blue Background)
    glBegin(GL_POLYGON);
        glColor3ub(0, 127.5, 255); // Light Blue color
        glVertex2f(-0.2f, 0.25f);  // Top Right
        glVertex2f(-0.2f, 0.75f);  // Bottom Right
        glVertex2f(-0.7f, 0.75f);  // Bottom Left
        glVertex2f(-0.7f, 0.25f);  // Top Left
    glEnd();

    // White Five-Pointed Star
    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255); // White color

        glVertex2f(-0.47f, 0.46f);
        glVertex2f(-0.53f, 0.53f);

        glVertex2f(-0.47f, 0.53f);
        glVertex2f(-0.445f, 0.65f);
        glVertex2f(-0.42f, 0.53f);

        glVertex2f(-0.36f, 0.53f);
        glVertex2f(-0.42f, 0.46f);
        glVertex2f(-0.385f, 0.35f);

        glVertex2f(-0.445f, 0.41f);
        glVertex2f(-0.51f, 0.35f);
    glEnd();




     // 3rd Quadrant: Flag of Tonga
    // Main Rectangle (Red Background)
    glBegin(GL_POLYGON);
        glColor3ub(255, 0, 0); // Red color
        glVertex2f(-0.2f, -0.25f); // Top Right
        glVertex2f(-0.2f, -0.75f); // Bottom Right
        glVertex2f(-0.7f, -0.75f); // Bottom Left
        glVertex2f(-0.7f, -0.25f); // Top Left
    glEnd();

    // Top-Left Small Rectangle (White Background)
    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255); // White color
        glVertex2f(-0.7f, -0.25f);  // Top Left
        glVertex2f(-0.5f, -0.25f);   // Top Right
        glVertex2f(-0.5f, -0.45f);  // Bottom Right
        glVertex2f(-0.7f, -0.45f); // Bottom Left
    glEnd();


    // Cross in the Small Rectangle (Red Cross)
    // Vertical Bar of the Cross
    glBegin(GL_POLYGON);
        glColor3ub(255, 0, 0); // Red color
        glVertex2f(-0.61f, -0.30f);  // Top Left
        glVertex2f(-0.59f, -0.30f);  // Top Right
        glVertex2f(-0.59f, -0.40f);  // Bottom Right
        glVertex2f(-0.61f, -0.40f);  // Bottom Left
    glEnd();

    // Horizontal Bar of the Cross
    glBegin(GL_POLYGON);
        glColor3ub(255, 0, 0); // Red color
        glVertex2f(-0.645f, -0.330f);  // Top Left
        glVertex2f(-0.555f, -0.330f);  // Top Right
        glVertex2f(-0.555f, -0.365f);  // Bottom Right
        glVertex2f(-0.645f, -0.365f);  // Bottom Left
    glEnd();



    // 4th Quadrant: Flag of Denmark
    // Main Rectangle (Red Background)
    glBegin(GL_POLYGON);
        glColor3f(1.0f, 0.0f, 0.0f); // Red Color
        glVertex2f(0.2f, -0.25f);
        glVertex2f(0.2f, -0.75f);
        glVertex2f(0.7f, -0.75f);
        glVertex2f(0.7f, -0.25f);
    glEnd();

    // Vertical Stripe (White)
    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255); // White Color
        glVertex2f(0.33f, -0.25f);  // Top Left
        glVertex2f(0.37f, -0.25f);  // Top Right
        glVertex2f(0.37f, -0.75f);  // Bottom Right
        glVertex2f(0.33f, -0.75f);  // Bottom Left
    glEnd();

    // Horizontal Stripe (White)
    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255); // White Color
        glVertex2f(0.2f, -0.45f);    // Top Left
        glVertex2f(0.7f, -0.45f);    // Top Right
        glVertex2f(0.7f, -0.5f);     // Bottom Right
        glVertex2f(0.2f, -0.5f);     // Bottom Left
    glEnd();


    glFlush();
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(2000, 1600); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("OpenGL Flag"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
