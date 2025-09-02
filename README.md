# Constructors_Destructors_In_CPP
## Aim
To study and implement constructors and destructors in C++.
## Theory
### Constructors
#### Purpose:
To initialize the data members of an object when it is created. They ensure that an object is in a valid and usable state from the moment of its creation.
#### Syntax:
A constructor has the same name as the class and does not have a return type (not even void).
#### Invocation:
Automatically called when an object of the class is created (e.g., MyClass obj; or MyClass* ptr = new MyClass();).
#### Types:
1. Default Constructor: A constructor that takes no arguments. If you don't define any constructor, the compiler provides a default constructor.
2. Parameterized Constructor: A constructor that takes one or more arguments, allowing you to initialize object members with specific values during creation.
3. Copy Constructor: A special constructor used to create a new object as a copy of an existing object.

### Destructors
#### Purpose: 
To perform cleanup operations and release resources allocated by an object before it is destroyed. This includes deallocating dynamically allocated memory, closing files, or releasing network connections.
#### Syntax: 
A destructor has the same name as the class, preceded by a tilde (~), and does not take any arguments or have a return type.
#### Invocation: 
Automatically called when an object is destroyed (e.g., when a local object goes out of scope, or when delete is used on a dynamically allocated object). 
#### Restrictions:
A class can have only one destructor, and it cannot be overloaded.

### Difference between constructor and destructor
<img width="817" height="648" alt="image" src="https://github.com/user-attachments/assets/a04975cd-2117-4e62-8e75-c3f1c6ae351d" />

## Algorithms
### Default Constructor
1. Start

2. Define a Car class with attributes: brand, model, purchase price, and expected selling price.

3. Create a constructor to: Ask the user for brand, model, purchase price, and expected selling price.

4. Store the entered values.

5. Define a display() function to print all stored details.

6. In main():Create an object c1 of Car and Call display() to show details.

7. End
### Parametrised Constructor
1. Start

2. Define a class Constructor with attributes: day, month, year.

3. Create a constructor that accepts three parameters.

4. Asks the user to enter date in dd/mm/yyyy format.

5. Stores the input in day, month, year.

6. Define show() function to print the date in dd/mm/yyyy format.

7. In main():Create an object c1 of class Constructor and Call show() to display the date.

8. End
### Copy Constructor
1. Start

2. Define a class Student with attributes: name and age.

3. Create a parameterized constructor to initialize name and age.

4. Create a copy constructor that copies values of name and age from an existing object and prints “Copy constructor called!”

5. Define display() function to print name and age.

6. In main():Create object s1 with name "Ananya" and age 19.

7. Create object s2 as a copy of s1 (calls copy constructor).

8. Display details of both objects using display().

9. End
### Destructor
1. Start

2. Define a class Destruct with a static counter count.

3. Create a constructor that: Increments count and prints number of objects created.

4. Create a destructor that: Decrements count and prints number of objects destroyed.

5. In main(): Create 5 objects (a, b, c, d, e).

6. Observe constructor messages while creating.

7. At program end, objects are destroyed automatically.

8. Destructor messages display objects being destroyed.

9. End
## Conclusion
We learnt to implement constructors and destructors and their working. 
