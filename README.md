# Classes_and_Objects
Experiment 11
## Contents
- [Aim](#aim)
- [Software Used](#software-used)
- [Theory](#theory)
  * [Definition](#definition)
  * [Class](#what-is-a-class)
  * [Object](#what-is-an-object)
  * [OOP Principles](principles-of-oop-in-c++)
- [Algorithms](#algorithms)
- [Conclusion](#conclusion)
## Aim 
To study Class and Objects

## Software Used 
VS Code

## Theory
### Definition
Object-Oriented Programming (OOP) is a programming principle centered around the concept of "objects."
#### What is a Class?
Class is basically a framework or blueprint which we use to create objects. It encapsulates data and functions that operate on the data. Objects share similarities to its class. For eg children and thier parents where children could be considered objects of the parent class.
> For example:
```cpp
#include <iostream>
using namespace std;

class Dog {
public:
    string name;
    int age;

    void bark() {
        cout << name << " Woof!" << endl;
    }
};

```
#### What is an Object?
An object is basically an instance of a class. It is a self-contained unit that contains both data and methods. The data (attributes) represents the state of the object, while the methods (functions) define its behavior. For eg, in a class Car, an object could be a specific car with features like color and model, and operations like starting engine, driving.
<br>
An Object has two defining features:
1. **Attributes:** These are the properties of an object. They represent the characteristics of the object. For eg, if you have a Car object, its attributes might include color, model, year etc. Attributes define what the object knows about itself.

2. **Methods:** These are the functions or behaviors that an object can perform. They define what the object can do or what operations can be performed on it. For the Car object, methods might include start_engine(), drive(), and apply_brakes(). Methods define what actions the object can take or how it can interact with other objects.
> For Example: Creating an object of class Dog:
```cpp  
int main() {
    Dog myDog;
    myDog.name = "Buddy";
    myDog.age = 3;

    myDog.bark();

    return 0;
}

```

### Principles of OOP in C++

#### 1. Encapsulation
-  Encapsulation is the concept of bundling data and methods that operate on that data within a single unit, typically a class. It hides the internal state of the object from the outside world and only exposes a controlled interface.
- **Example**: In C++, encapsulation is achieved using classes. Data members (attributes) are kept private or protected, and access to these members is provided through public methods (getters and setters).


#### 2. Inheritance
-  Inheritance allows a class (derived class) to inherit properties and behaviors (methods) from another class (base class). This promotes code reusability and establishes a hierarchy between classes.

    ```cpp
    class Animal {
    public:
        void eat() { std::cout << "Eating..." << std::endl; }
    };

    class Dog : public Animal {
    public:
        void bark() { std::cout << "Barking..." << std::endl; }
    };
    ```

#### 3. Polymorphism
-  Polymorphism allows objects of different classes to be treated as objects of a common base class. The most common use of polymorphism is to call methods on objects of derived classes through base class pointers or references, enabling dynamic method binding.


#### 4. Abstraction
- Abstraction focuses on hiding the complex implementation details and showing only the necessary features of an object. It simplifies interactions with objects by exposing only the relevant methods and properties.



## Algorithms
### Define method inside class

1. **Start**

2. **Define the `Student` Class**
   - **Public Section**
     - **Define the `myMethod` Function**
       - Print"I am studying in 2nd year"
3. **Main Function**
   - Create an object `s1` of type `Student`.
   - Call the `myMethod` function on the `s1` object.

4. **End**

### Define method outside class
1. **Start**

2. **Define the `Student` Class**
   - **Public Section**
     - **Declare the `myMethod` Function**
       - The function will be defined outside the class.

3. **Define the `myMethod` Function Outside the Class**
   - **Specify that this function belongs to the `Student` class**
   - Print the message "A Sophomore in SIT" to the console.

4. **Main Function**
   - Create an object `s1` of type `Student`.
   - Call the `myMethod` function on the `s1` object.

5. **End**

### Cuboid Volume
1. **Start**

2. **Define `Cubiod` Class**
   - **Public Section**
     - **Data Members**
       - `int length, breadth, height, volume;`
     - **Member Functions**
       - **`input()` Function**
         - Prompt the user to enter the length, breadth, and height of the cuboid.
         - Read the values and store them in t `length`, `breadth`, and `height` variables.
       - **`Volume()` Function**
         - Calculate the volume of the cuboid using the formula: `volume = length * breadth * height`.
       - **`Output()` Function**
         - Print : "The volume of the given Cuboid is : <volume>".

3. **Main Function**
   - Create an object `v1` of type `Cubiod`.
   - Call the `input()` function for `v1` to get the dimensions from the user.
   - Call the `Volume()` function for `v1` to calculate the volume.
   - Call the `Output()` function for`v1` to display the volume.

4. **End**

## Conclusion
We learnt to use the concepts of Class and Objects.
