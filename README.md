# C++ University Labs

This repository contains a series of lab projects for a university-level course in C++. Each lab focuses on different C++ programming aspects, from basic structures to advanced concepts like casting and memory management. The projects are well-commented and prepared for documentation generation using Doxygen.

## Labs Overview

- **02 - Basic Structures:** Introduction to basic data structures in C++.
- **03 - VLA (Variable Length Arrays):** Exploring arrays with variable lengths in C++.
- **04 - Classes:** Fundamental concepts of classes and object-oriented programming in C++.
- **05 - String, Setters, Getters:** String manipulation and the use of setter and getter methods in class design.
- **06 - `std::array` `std::vector`:** Utilization of C++ Standard Library containers: `std::array` and `std::vector`.
- **07 - `std::array` `std::vector`:** Advanced exercises with `std::array` and `std::vector`.
- **08 - Constructors, Moving Constructor, Destructor:** Understanding constructors, move constructors, and destructors in C++.
- **09 - Casting:** Techniques and types of casting in C++.
- **10 - new, delete, `std::move`:** Memory management in C++ using `new`, `delete`, and `std::move`.

## Project Structure

- `main.cpp`: The main entry point for the projects.
- `src/`: This folder contains the `.cpp` source files for each lab.
- `include/`: This folder houses the `.h` header files.
- `build/`: Contains the Makefile for building the projects using CMake.

## Getting Started

To get started with these labs, clone this repository and navigate to each lab's directory. Each directory contains the lab instructions, source code, and any additional resources needed to complete the lab.

```bash
git clone https://github.com/your-username/cpp-university-labs.git
cd cpp-university-labs
```

## Building the Project

This project uses CMake for building. It's necessary to build the project out of the source to maintain a clean directory structure. Follow these steps to build the project:

1. Ensure CMake is installed on your system.
2. Navigate to the `build` directory from the project root:
   ```bash
   cd build
   ```
3. Run CMake to configure the project and generate a Makefile:
   ```bash
   cmake ..
   ```
4. Build the project:
   ```bash
   cmake --build .
   ```

This process compiles the source code and generates executable files within the `build` directory.

## Documentation

The projects are commented and prepared for documentation generation using Doxygen. To generate the documentation:

1. Ensure Doxygen is installed on your system.
2. Run Doxygen from the project root:
   ```bash
   doxygen
   ```

This will generate a `docs` folder containing the HTML and LaTeX formatted documentation.

## Prerequisites

- A basic understanding of C++ programming.
- A C++ compiler (e.g., GCC, Clang).
- CMake for building the project.
- Doxygen for generating documentation.

## Acknowledgments

- Thanks to all the students and faculty members who contributed to these labs.
- Special thanks to the Professor for guidance and support throughout the course.