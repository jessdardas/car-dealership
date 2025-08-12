# Car Dealership (University Project)

**Short description:** A small C++ program that models cars and a car dealership. You can add cars, remove cars by index, and print the inventory.

## Files
- `include/Car.h`, `src/Car.cpp`
- `include/CarDealership.h`, `src/CarDealership.cpp`
- `src/main.cpp`
- `CMakeLists.txt`

## Build (Linux/macOS)
```bash
mkdir build
cd build
cmake ..
cmake --build .
./car_dealership


the assignmnet in question:

Faculty of Natural and Applied Sciences 
Computer Science Department
CSC 213 – Spring 2023
Assignment #2
Collaboration Policy:
This assignment must be performed individually.
Due Date:
The assignment is due on Tuesday 18th April by 11:59 PM. Late Submission will not be accepted.
Deliverables:
Please use Blackboard to submit your assignment. You should submit:
• All C++ file(s) that contains your C++ code.
• All header files.
Objective:
The objective of this assignment is to get familiar with Inheritance and Polymorphism using C++.
Notes:
You are required to use comments to explain what you’re doing. (Using comments)
1. Create a base class called Person with the following private member variables:
a. name (string): The name of the person.
b. age (int): The age of the person.
2. Define a constructor for the Person class that takes in two parameters (name and age) and 
initializes the member variables.
3. Create a public virtual member function called printDetails() that prints the name and age 
of the person to the console.
4. Create a derived class called Student that inherits from Person. The Student class should 
have the following private member variable:
a. major (string): The major of the student.
5. Define a constructor for the Student class that takes in three parameters (name, age, and 
major) and initializes the member variables.
6. Override the printDetails() function in the Student class to print the name, age, and major 
of the student to the console.
7. Create a derived class called Professor that inherits from Person. The Professor class 
should have the following private member variable:
a. department (string): The department of the professor.
8. Define a constructor for the Professor class that takes in three parameters (name, age, and 
department) and initializes the member variables.
9. Override the printDetails() function in the Professor class to print the name, age, and 
department of the professor to the console.
10. In the main() function, create an array of Person pointers and allocate memory for two 
instances of each type of person (one Student and one Professor). Use the new keyword 
to allocate memory for each person.
11. Initialize the member variables of each Student and Professor instance.
12. Call the printDetails() function for each person instance and output the details to the 
console.
13. Delete the memory allocated for each person instance using the delete keyword.
Instructions:
1. Create header files for each class. 
2. Create C++ files that implement each class.
3. Main function should have a C++ file also.