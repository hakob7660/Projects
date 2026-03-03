# CGPA Calculator (C++)

A modular, object-oriented CGPA calculator that helps students track their academic performance. This project demonstrates C++ best practices, including class encapsulation, header file management, and automated builds using a Makefile.

## Project Structure

* **include/**: Header files (`.hpp`) containing class declarations.
* **src/**: Implementation files (`.cpp`) for the calculator logic.
* **main/**: Entry point of the application (`main.cpp`).
* **makefile**: Build instructions for the compiler.

## Getting Started

### Prerequisites
* A C++ compiler (GCC/G++ recommended)
* `make` utility installed on your system

### Installation & Build
1. Clone or download this project to your local machine.
2. Open your terminal in the `CGPA_CALCULATOR` root directory.
3. Run the following command to compile the project:
```bash
   make
```

### Running the Program
After building, an executable named cgpa_calc will be created. Run it using:
```bash
        ./cgpa_calc
```

### Logic & Math
The calculator uses the weighted average formula to determine CGPA:
      CGPA=∑(Grade Point×Credit Hours) / ​∑Total Credit Hours

### Features

    Object-Oriented Programming: Uses Course and CGPACalculator classes for data safety.

    Header Guards: Implements #ifndef,#define,#endif once to prevent header conflicts.

    Clean Build: The Makefile organizes object files to keep the source folders clean.
