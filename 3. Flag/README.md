
# OpenGL Quadrant Flags

This project demonstrates the use of OpenGL to render different country flags in four quadrants of a graphical window. Each flag is represented within its respective quadrant using basic OpenGL primitives.

## Flags Rendered
1. **First Quadrant (Top Right)**: Sudan
2. **Second Quadrant (Top Left)**: Somalia
3. **Third Quadrant (Bottom Left)**: Tonga
4. **Fourth Quadrant (Bottom Right)**: Denmark

## Features
- **Axis Rendering**: X and Y axes drawn as a reference.
- **Flag Rendering**: Uses polygons and lines to create accurate representations of flags.
- **Quadrant Separation**: Each flag is positioned in its respective quadrant for clarity.

## Prerequisites
To run this project, you need the following:
- A C++ compiler (e.g., GCC or MSVC)
- OpenGL and GLUT installed on your system



## Code
The core rendering logic uses OpenGL functions to draw flags and shapes. Below is an example of rendering the flag of Sudan in the first quadrant:
```cpp
// Main Rectangle
glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2f, 0.25f);
    glVertex2f(0.2f, 0.75f);
    glVertex2f(0.7f, 0.75f);
    glVertex2f(0.7f, 0.25f);
glEnd();
```

## Output
The program produces a graphical window displaying the flags of:
- Sudan
- Somalia
- Tonga
- Denmark

### Screenshot of the Output
![Output Flags](/Assets/3_Flag.png)

## Acknowledgments
- OpenGL and GLUT libraries for graphical rendering.
- Flags inspired by real-world designs.

## Author
- **Basharul - Alam - Mazu**  
  GitHub: [basharulalammazu](https://github.com/basharulalammazu)

## License
This project is licensed under the MIT License - see the [LICENSE](/LICENSE) file for details.