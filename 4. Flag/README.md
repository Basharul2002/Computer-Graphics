# OpenGL Flags Project

This project is a simple OpenGL program that displays the flags of Greece and Sweden. The program demonstrates fundamental OpenGL concepts, such as drawing polygons, setting colors, and rendering text.

## Features
- Displays the vertical axis.
- Greece flag on the left side of the window.
- Sweden flag on the right side of the window.

## Screenshots
(Add screenshots here if possible. To take a screenshot, run the program and use a tool to capture the output window.)

## Code Description
The project includes:
- **Flag of Greece**: The flag is drawn using multiple polygons to represent the cross and stripes.
- **Flag of Sweden**: The flag includes a blue background with yellow horizontal and vertical stripes.
- **Axis Representation**: A simple vertical axis in the center.

### Main Functions:
- **`renderBitmapString(float x, float y, float z, void *font, char *string)`**:
  Renders a string at a specific position using a bitmap font.
- **`display()`**:
  Contains the logic for rendering the flags and axis. It includes color definitions, polygon rendering, and flush commands.
- **`main()`**:
  Sets up the OpenGL context, initializes the window, and starts the event loop.

## Prerequisites
To compile and run this project, you need:
- A C++ compiler (e.g., GCC, MSVC).
- OpenGL library and GLUT installed.


## Output
The program opens a window displaying:
![Left Image](/Assets/4_Flag.png)
*Left: Greece's flag | Right: Sweden's flag*


## License
This project is licensed under the MIT License. Feel free to use, modify, and distribute it as you wish.

---

### Contribution
Contributions are welcome! Feel free to open an issue or submit a pull request.

## Author
[Basharul - Alam - Mazu](https://github.com/basharulalammazu)
```
