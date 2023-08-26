# Project_07
# Fractals Project 

## Objective

The objective of the "Fractals Project" for the CIIC4010/ICOM4015 course is to enhance the PA3: Fractals application by adding new features and functionality. The base application displays a circle fractal and allows users to switch between different fractal modes using the numbers 1-5. Your task is to add new elements, refactor code, and introduce an animation feature to enhance the application.

## Project Overview

In this project, you will work on the Fractals application, which involves drawing various fractal shapes and patterns. The project is divided into three phases, each introducing new specifications and features with increasing complexity.

## General Instructions

- You will work in teams of two students.
- Personal repositories will not be graded.
- One partner will create the team repository, and the other will join it using their GitHub credentials.
- Team members should include their names and emails in the README.md file.
- Each partner should commit their contributions using their individual GitHub credentials.
- Collaboration and professionalism are essential throughout the project.
- If you encounter any issues or problems with your partner, follow the outlined steps to resolve them.

## Phase 1 (Suggested Deadline: November 18)

**Specifications:**

- **Levels**: Create an attribute "levels" to control the depth of recursion of a fractal. Allow users to decrease the depth of recursion by pressing the LEFT ARROW key and increase it by pressing the RIGHT ARROW key.
- **Coloring Levels**: Assign different colors to each level or depth of the fractals. Implement this feature for at least one fractal, such as the Koch Snowflake.

## Phase 2 (Suggested Deadline: November 25)

**Specifications:**

- **Fractal Interface**: Create an interface called `Fractal` with three methods: `draw()`, `getName()`, and `getLevel()`.
- **AbstractFractal Class**: Create an abstract class called `AbstractFractal` containing common properties and methods shared between fractals, such as name, level, getters, setters, etc. Ensure that subclasses call the constructor of the abstract class and include at least one abstract method.
- **Edit Tree Fractal**: Add two smaller Tree fractals positioned to the left and right of the main tree, without touching it.
- **Complete Sierpinski**: Modify Sierpinski’s triangle fractal to make it complete, requiring three recursive calls instead of two.

## Phase 3 (Suggested Deadline: December 6)

**Specifications:**

- **Refactor Fractals**: Move each of the `drawMode#()` methods in `ofApp` into a subclass of `AbstractFractal` class. Use a polymorphic vector to store pointers to `Fractal` objects. Allow users to draw the fractal at a specific position (index) in the vector by pressing a number key. Display the name of the active fractal at the top-left corner of the screen.
- **New Fractal**: Create a new `Fractal` of your own design, which can use multiple shapes and be as complex as desired. Ensure that the fractal implements the same pattern at each level of recursion. Implement this new fractal using recursion.
- **Animation**: Add an animation feature to the application. When users press the space bar, set the recursion depth to 1 and activate the animation. Gradually increase the recursion depth every few frames to create an animation of the current fractal growing slowly. The fractal should reach a certain level in recursion and then reset to 1. Users can cancel the animation by pressing the space bar again.
