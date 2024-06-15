### Lesson 1

# Variables in C++
A variable is a named location in memoery that is used to hold a value that may be modified by the program

### Identifiers - 
These are the names of variables, functions, labels, and various other suer-defined objects

#### How to name an identifier -
Rule 1: The first character - a letter or an underscore <br>
Rule 2: The subsequent characters must be either letters,digits or underscores ('_')

|Correct| Incorrect|
|-------|----------|
|count  | 1count   |
|test23 | hi!123   |
|high_balance| high...balance|


Note - Name of the identifiers are case sensitive. Thus **count**, **Count** and **COUNT** all are different

--------

# Datatypes in C++
There are five datatypes in C++. They are -
* Character - **char**
* integer - **int**
* floating-point - **float**
* double floating-point- **double**
* Valuesless - **void**


--------

# Examples

## Program 1
In this program, we are creating five different variables of five different datatypes
```c++

int age = 26 ;                              // integer datatype

char gender = 'M' ;                         // character datatype

char name = "Jishnu" ;                      // String datatype
	
bool is_older_than18 = true ;               // boolean datatype

float todays_temperature = 36.5 ;           // floating point datatype

double radius_of_earth = 6400000 ;          //double floating point datatype
```

### first Pause -
* A good readable program should have sufficient blank spaces
* Look how different variables are named
* Providing comment is an useful practice. Look they have been incorporated into the code. Proper commenting enhances readability of your code

-----

# Arithmetic Operators
|Operator|Action|
|--------|------|
|-|Substraction|
|+|Addition|
|*|Multiplication|
|/|Division|
|%|Modulus|

These operates on numbers the same way as we find them in mathematics

## Program 2
Find out the volume and area of a sphere of radius 2.5 mm

## program 3
A fluid is flowing through a pipe of diameter 10 mm with a velocity 1cm/s. The kinematic viscosity of the fluid is 1e-6 m^2/s. What will be Reynolds number for this flow ?

We say Reynolds number corresponds to Re less than 2000. Can you write a program to check if our flow lies in the laminar regime or not ? 






















