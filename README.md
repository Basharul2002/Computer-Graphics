# Computer Graphics Projects

This repository contains a collection of Computer Graphics projects developed to explore and implement graphical rendering techniques using OpenGL. Each project showcases different aspects of computer graphics, including shapes visualization and flag rendering.

---

## Projects

### 1. **Graphical Shapes Visualization**
- **Description**:  
  A project demonstrating the rendering of various 2D and 3D shapes using OpenGL. This project includes visualization of basic geometric shapes such as lines, circles, rectangles, and polygons, as well as 3D objects like cubes, spheres, and cones.
- **Features**:
  - Basic shape rendering with colors and transformations.
  - Interactive controls for scaling, rotating, and translating objects.
  - Use of OpenGL primitives for precise drawing.
- **Skills Demonstrated**:
  - 2D and 3D rendering.
  - Transformation matrices and viewport handling.
  - Understanding of OpenGL pipeline.

---

### 2. **Flag Rendering**
- **Description**:  
  This project renders the national flags of different countries in specific quadrants of a graphical window. The implementation uses OpenGL primitives such as polygons and lines to create accurate flag representations.
- **Features**:
  - **Quadrant-Based Rendering**: Each flag is rendered in one of the four quadrants of the graphical window.
  - **Flags Rendered**:
    1. Sudan
    2. Somalia
    3. Tonga
    4. Denmark
  - **Axis Visualization**: Includes reference axes (X and Y) for better orientation.
- **Skills Demonstrated**:
  - Polygon-based rendering of complex shapes.
  - Color manipulation and pattern design.
  - Window setup and viewport division.

---

## How to Run
To run these projects, follow the steps below:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/basharulalammazu/computer-graphics.git
   ```
2. **Install OpenGL and GLUT**:  
   Ensure OpenGL and GLUT are installed on your system.

3. **Compile the code**:  
   Use your preferred compiler to compile the project code. Example using `g++`:
   ```bash
   g++ -o ProjectName project_name.cpp -lGL -lGLU -lglut
   ```
   Replace `ProjectName` and `project_name.cpp` with the appropriate project executable and source file.

4. **Run the executable**:
   ```bash
   ./ProjectName
   ```

---

## Repository Structure
```
📂 Computer Graphics Projects
├── 📁 Graphical Shapes Visualization
│   ├── 📁 bin\Debug
|   |   |── Lab 2.exe
│   ├── 📁 obj\Debug
|   |   |── main.o
│   ├── Lab 2.cbp
│   ├── Lab 2.depend
│   ├── Lab 2.layout
│   ├── main.cpp
│   ├── README.md
├── 📁 Flag Rendering
│   ├── 📁 bin\Debug
|   |   |── Flag.exe
│   ├── 📁 obj\Debug
|   |   |── main.o
│   ├── Flag.cbp
│   ├── Flag.depend
│   ├── Flag.layout
│   ├── main.cpp
│   ├── README.md
├── 📁 Assets
│   ├── 1_GraphicalShapesVisualization.png
│   ├── 3_Flag.png
└── README.md
```

---

## Output Screenshots

### **1. Graphical Shapes Visualization**
![Graphical Shapes Visualization Output](/Assets/1_GraphicalShapesVisualization.png)

### **2. Flag Rendering**
![Flag Rendering Output](/Assets/3_Flag.png)
*Flags of Sudan, Somalia, Tonga, and Denmark rendered in different quadrants.*

---

## Author
**Basharul - Alam - Mazu**   
- **GitHub**: [basharulalammazu](https://github.com/basharulalammazu)  
- **LinkedIn**: [Basharul Alam Mazu](https://linkedin.com/in/basharul-alam-mazu)

---

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.
