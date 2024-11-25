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

    //1
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 255); // Blue color
        glVertex2f(-0.1f, 0.62f);
        glVertex2f(-0.063f, 0.62f);
        glVertex2f(-0.063f, 0.449f);
        glVertex2f(-0.1f, 0.449f);
    glEnd();

    //2
     glBegin(GL_POLYGON);
        glColor3ub(0, 0, 255); // Blue color
        glVertex2f(-0.063f, 0.576f);
        glVertex2f(0.063f, 0.576f);
        glVertex2f(0.063f, 0.549f);
        glVertex2f(-0.063f, 0.549f);
    glEnd();

    // 3
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 255); // Blue color
        glVertex2f(0.1f, 0.62f);
        glVertex2f(0.063f, 0.62f);wh
        glVertex2f(0.063f, 0.449f);
        glVertex2f(0.1f, 0.449f);
    glEnd();

    // 4
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 0); // Blue color
        glVertex2f(-0.063f, 0.549f);
        glVertex2f(0.063f, 0.549f);
        glVertex2f(0.063f, 0.512f);
        glVertex2f(-0.063f, 0.512f);
    glEnd();

    //5
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 0); // Blue color
        glVertex2f(-0.015f, 0.512f);
        glVertex2f(0.015f, 0.512f);
        glVertex2f(0.015f, 0.449f);
        glVertex2f(-0.015f, 0.449f);
    glEnd();

    //6
     glBegin(GL_POLYGON);
        glColor3ub(0, 0, 255); // Blue color
        glVertex2f(-0.1f, 0.449f);
        glVertex2f(0.1f, 0.449f);
        glVertex2f(0.1f, 0.421f);
        glVertex2f(-0.1f, 0.421f);
    glEnd();

    //7 (4,5)
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 0); // Blue color
        glVertex2f(-0.063f, 0.449f);
        glVertex2f(-0.025f, 0.449f);
        glVertex2f(-0.025f, 0.421f);
        glVertex2f(-0.063f, 0.421f);
    glEnd();

    //8 -> 5
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 0); // Blue color
        glVertex2f(0.015f, 0.449f);
        glVertex2f(0.063f, 0.449f);
        glVertex2f(0.063f, 0.421f);
        glVertex2f(0.015f, 0.421f);
    glEnd();


    // 9
    glBegin(GL_POLYGON);
        glColor3ub(255, 255, 0); // Blue color
        glVertex2f(-0.1f, 0.421f);
        glVertex2f(0.1f, 0.421f);
        glVertex2f(0.1f, 0.380f);
        glVertex2f(-0.1f, 0.380f);
    glEnd();


    // 10
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 0); // Blue color
        glVertex2f(-0.064f, 0.380f);
        glVertex2f(0.064f, 0.380f);
        glVertex2f(0.064f, 0.340f);
        glVertex2f(-0.064f, 0.340f);
    glEnd();


    // 11
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 0); // Blue color
        glVertex2f(-0.266f, 0.340f);
        glVertex2f(0.266f, 0.340f);
        glVertex2f(0.266f, -0.375f);
        glVertex2f(-0.266f, -0.375f);
    glEnd();


    // 12
     glBegin(GL_POLYGON);
        glColor3ub(0, 255, 0); // Blue color
        glVertex2f(-0.12f, 0.05f);
        glVertex2f(0.12f, 0.05f);
        glVertex2f(0.12f, -0.05f);
        glVertex2f(-0.12f, -0.05f);
    glEnd();




    // 20
    glBegin(GL_POLYGON);
        glColor3ub(240, 0, 0); // Blue color
        glVertex2f(-0.1825f, -0.375f);
        glVertex2f(-0.0766f, -0.375f);
        glVertex2f(-0.0766f, -0.5f);
        glVertex2f(-0.1825f, -0.5f);
    glEnd();

    // 21
    glBegin(GL_POLYGON);
        glColor3ub(240, 0, 0); // Blue color
        glVertex2f(-0.268f, -0.473f);
        glVertex2f(-0.1825f, -0.473f);
        glVertex2f(-0.1825f, -0.5f);
        glVertex2f(-0.268f, -0.5f);
    glEnd();

    // 22
    glBegin(GL_POLYGON);
        glColor3ub(240, 0, 0); // Blue color
        glVertex2f(0.1825f, -0.375f);
        glVertex2f(0.0766f, -0.375f);
        glVertex2f(0.0766f, -0.5f);
        glVertex2f(0.1825f, -0.5f);
    glEnd();

    // 24
    glBegin(GL_POLYGON);
        glColor3ub(240, 0, 0); // Blue color
        glVertex2f(0.268f, -0.473f);
        glVertex2f(0.1825f, -0.473f);
        glVertex2f(0.1825f, -0.5f);
        glVertex2f(0.268f, -0.5f);
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
    glutInitWindowSize(800, 800);    // Set the window size
    glutInitWindowPosition(1, 2);      // Set window position on screen
    glutCreateWindow("OpenGL Flag");   // Create window with a title
    glutDisplayFunc(display);          // Register display callback function
    glutMainLoop();                    // Enter the event-processing loop
    return 0;                          // Exit the program
}
