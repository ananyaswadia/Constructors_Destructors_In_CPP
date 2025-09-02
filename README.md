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
## Conclusion
We learnt to implement constructors and destructors and their working. 
