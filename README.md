# CPP07


## Description:

This module introduces the concept of templates in C++. Through a series of exercises, you'll explore function templates, the use of templates in iterating over arrays, and the creation of a template-based array class. The exercises aim to solidify your understanding of generic programming in C++ by implementing reusable and type-safe code.
## Overview:

The module consists of three exercises:

## Exercise 00: Start with a Few Functions
- Objective: Implement basic function templates to perform common operations on any data type.
  
**Key Features:**
- swap: Swaps the values of two given arguments.
- min: Returns the smaller of the two arguments. If they are equal, it returns the second one.
- max: Returns the greater of the two arguments. If they are equal, it returns the second one.
- These templates work with any type of argument that supports comparison operators (<, >).
- Templates are defined in header files, following best practices for C++ template functions.
## Exercise 01: Iter
- Objective: Implement a template function iter that applies a given function to each element of an array.
  
**Key Features:**
- The iter function template takes three parameters:
  - The address of an array.
  - The length of the array.
  - A function to apply to each element of the array.
- The iter function is generic and works with any data type and any function that can be applied to the elements of the array.
- This exercise emphasizes the use of function pointers or function objects to manipulate array elements.

## Exercise 02: Array
- Objective: Implement a class template Array that provides a type-safe array structure.

**Key Features:**
- Default Constructor: Creates an empty array.
- Parameterized Constructor: Creates an array of n elements, initialized by default.
- Copy Constructor and Assignment Operator: Ensure deep copying of arrays, so modifications to one array do not affect the other.
- Memory Management: Uses new[] for dynamic memory allocation, avoiding preventive allocation and ensuring no access to non-allocated memory.
- Element Access: Provides subscript operator [] for accessing elements. If an index is out of bounds, throws an std::exception.
- Size Function: Returns the number of elements in the array without modifying the instance.
- This exercise enforces robust memory management and exception handling in template-based classes.

## File Structure: 
- ex00/: Contains the implementation of the function templates swap, min, and max.
- ex01/: Contains the implementation of the iter function template.
- ex02/: Contains the implementation of the Array class template.
- Makefile: Provided in each directory for compiling the respective exercises.
- main.cpp: Each directory contains a main.cpp file with test cases to demonstrate the functionality.

## Compilation and Execution:

Navigate to the Exercise Directory: Open a terminal and change to the directory of the exercise you want to run.
 ```bash
cd ex00  # Replace 'ex00' with the exercise directory you want to run
```
Compile the Code: Use the provided Makefile to compile the code.
 ```bash
make
```
Run the Executable: After successful compilation, run the generated executable.
```bash
./ex00_test  # Replace 'ex00_test' with the name of the executable for the exercise
```
Verify Output: Check the output in the terminal to verify the correctness of the program.
   
Clean Up (Optional): To clean up the compiled files, you can use the clean/fclean target in the Makefile.
 ```bash
make clean
```
or 
 ```bash
make fclean
```

## Conclusion:

This module deepens our understanding of C++ templates, focusing on function templates, iterating over arrays, and creating template-based classes. By the end of this module, we have a solid grasp of generic programming, memory management, and exception handling in C++.

## 🚀 Next Project

[CPP08](https://github.com/adhaka-afk/CPP08)

## ⏳ Previous Project

[CPP06](https://github.com/adhaka-afk/CPP06)


