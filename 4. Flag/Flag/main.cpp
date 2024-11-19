#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

/*
 * Function to render a string at a specified position using a bitmap font.
 * @param x: X-coordinate for the text position.
 * @param y: Y-coordinate for the text position.
 * @param z: Z-coordinate for the text position.
 * @param font: Pointer to the GLUT font to use.
 * @param string: The text string to render.
 */

void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
        glutBitmapCharacter(font, *c);
}


/*
 * Function to display graphical elements in the OpenGL context.
 * Draws multiple elements such as axes and flags (Greece and Sweden).
 */
void display()
{
    glClearColor(0.3f, 0.3f, 0.3f, 0.3f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
    glPointSize(5.0);

    // Draw the vertical axis
    glBegin(GL_LINES);
        glColor3ub(255, 255, 255); // White color
        glVertex2f(0.0f, -1.0f); // Bottom of the axis
        glVertex2f(0.0f, 1.0f);
    glEnd();



    // Left Side: Flag of Greece
    // Main blue rectangle
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 255); // Blue color
        glVertex2f(-0.2f, 0.25f); // Top Right
        glVertex2f(-0.2f, -0.20f); // Bottom Right
        glVertex2f(-0.7f, -0.20f); // Bottom Left
        glVertex2f(-0.7f, 0.25f); // Top Left
    glEnd();

    // Top-left white rectangle
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 255); // Blue color
        glVertex2f(-0.7f, 0.25f); // Top Left
        glVertex2f(-0.5f, 0.25f); // Top Right
        glVertex2f(-0.5f, 0.0f); // Bottom Right
        glVertex2f(-0.7f, 0.0f); // Bottom Left
    glEnd();

    // Cross in the small rectangle
    // Horizontal bar
    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255); // White color
        glVertex2f(-0.7f, 0.15f); // Top Left
        glVertex2f(-0.5f, 0.15f); // Top Right
        glVertex2f(-0.5f, 0.10f); // Bottom Right
        glVertex2f(-0.7f, 0.10f); // Bottom Left
    glEnd();

    // Vertical bar
    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255); // Whie color
        glVertex2f(-0.62f, 0.25f);  // Top Left
        glVertex2f(-0.59f, 0.25f);  // Top Right
        glVertex2f(-0.59f, 0.00f);  // Bottom Right
        glVertex2f(-0.62f, 0.00f);  // Bottom Left
    glEnd();


    // Horizontal and vertical stripes of the Greece flag
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 240); // Blue color
        glVertex2f(-0.5f, 0.25f); // Top Right
        glVertex2f(-0.5f, 0.20f); // Bottom Right
        glVertex2f(-0.2f, 0.20f); // Bottom Left
        glVertex2f(-0.2f, 0.25f); // Bottom Left
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255); // Red color
        glVertex2f(-0.5f, 0.20f);  // Top Right
        glVertex2f(-0.5f, 0.15f);  // Bottom Right
        glVertex2f(-0.2f, 0.15f);  // Bottom Left
        glVertex2f(-0.2f, 0.20f);  // Bottom Left
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 255); // Red color
        glVertex2f(-0.5f, 0.15f); // Top Right
        glVertex2f(-0.5f, 0.10f); // Bottom Right
        glVertex2f(-0.2f, 0.10f); // Bottom Left
        glVertex2f(-0.2f, 0.15f); // Bottom Left
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255); // Red color
        glVertex2f(-0.5f, 0.10f); // Top Right
        glVertex2f(-0.5f, 0.05f); // Bottom Right
        glVertex2f(-0.2f, 0.05f); // Bottom Left
        glVertex2f(-0.2f, 0.10f); // Bottom Left
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 255); // Red color
        glVertex2f(-0.5f, 0.05f); // Top Right
        glVertex2f(-0.5f, 0.00f); // Bottom Right
        glVertex2f(-0.2f, 0.00f); // Bottom Left
        glVertex2f(-0.2f, 0.05f); // Bottom Left
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255); // Red color
        glVertex2f(-0.7f, 0.0f); // Top Right
        glVertex2f(-0.7f, -0.05f); // Bottom Right
        glVertex2f(-0.2f, -0.05f); // Bottom Left
        glVertex2f(-0.2f, 0.0f); // Bottom Left
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 255); // Red color
        glVertex2f(-0.7f, -0.05f); // Top Right
        glVertex2f(-0.7f, -0.10f); // Bottom Right
        glVertex2f(-0.2f, -0.10f); // Bottom Left
        glVertex2f(-0.2f, -0.05f); // Bottom Left
    glEnd();

    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255); // Red color
        glVertex2f(-0.7f, -0.10f); // Top Right
        glVertex2f(-0.7f, -0.15f); // Bottom Right
        glVertex2f(-0.2f, -0.15f); // Bottom Left
        glVertex2f(-0.2f, -0.10f); // Bottom Left
    glEnd();

     glBegin(GL_POLYGON);
        glColor3ub(0, 0, 255); // Red color
        glVertex2f(-0.7f, -0.15f);  // Top Right
        glVertex2f(-0.7f, -0.20f);  // Bottom Right
        glVertex2f(-0.2f, -0.20f);  // Bottom Left
        glVertex2f(-0.2f, -0.15f);  // Bottom Left
    glEnd();



    // Right side: Flag of Sweden
    // Main Rectangle (Blue Background)
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 240); // Blue Color
        glVertex2f(0.2f, 0.25f); // Top Left
        glVertex2f(0.2f, -0.25f);// Bottom Left
        glVertex2f(0.7f, -0.25f); // Top Right
        glVertex2f(0.7f, 0.25f); // Top Right
    glEnd();

    // Horizontal yellow stripe
    glBegin(GL_POLYGON);
        glColor3ub(240, 255, 0); // Yellow Color
        glVertex2f(0.35f, 0.25f);  // Top Left
        glVertex2f(0.40f, 0.25f);  // Top Right
        glVertex2f(0.40f, -0.25f); // Bottom Right
        glVertex2f(0.35f, -0.25f); // Bottom Left
    glEnd();

    // Vertical Stripe (Yellow)
    glBegin(GL_POLYGON);
        glColor3ub(240, 255, 0); // Yellow Color
        glVertex2f(0.2f, 0.04f); // Top Left
        glVertex2f(0.7f, 0.04f); // Top Right
        glVertex2f(0.7f, -0.04f); // Bottom Right
        glVertex2f(0.2f, -0.04f); // Bottom Left
    glEnd();


    glFlush(); // Render all graphics immediately
}

/*
 * Main function: Entry point of the application.
 * Sets up the OpenGL context and window properties, and enters the event loop.
 */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);             // Initialize GLUT
    glutInitWindowSize(2000, 1600);    // Set the window size
    glutInitWindowPosition(1, 2);      // Set window position on screen
    glutCreateWindow("OpenGL Flag");   // Create window with a title
    glutDisplayFunc(display);          // Register display callback function
    glutMainLoop();                    // Enter the event-processing loop
    return 0;                          // Exit the program
}
