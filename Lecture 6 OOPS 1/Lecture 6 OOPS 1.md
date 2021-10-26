# OBJECT ORIENTED PROGRAMMING
Entities having properties and functions
## CLASS
Blueprint that defines the properties and funtions of an object. ALso known as user-defined data types.
### Syntax
```cpp
class Student {
public: // public class
    string name;
    int age;
};

class Product {
    // private class
    int id;
    int weight;
    char name[100];
}
```
## OBJECT
A specific copy of a class, with all the properties filled with respective values
### Syntax
```cpp
#include<iostream>
using namespace std;

class Student {
    int age, rollnumber;
    string name;
};

int main() {
    // static allocation
    Student S1;
    Student S2;

    S1.age=20;
    S2.name = "harry";

    // dynamic allocation
    Student* S3 = new Student;
    (*S3).age = 33;
    S3->name = "dynamic";
}
```
## Access Modifiers
### Public
Accessible outside the class.
### Private
Not Accessible outside the definition of class. By default all the properties are private. These properties are accessed by the use of functions.

## Getters and setters
```cpp
class Student {
public:
    int rollNumber;
    int age;


    void display() {
        cout<<this->rollNumber<<" "<<this.age<<endl;
    }
    void setAge(int age) {
        this->age = age;
    }
};
```
## Constructors
```cpp
class Student {
    int age, rollNumber;

    Student(int age, int rollNumber) {
        this->age = age;
        this->rollNumber = rollNumber;
    }
};
```
### Default Constructor
When no custom constructor is defined.
### Copy Constructor
```cpp
Student S2(S1);
// copy of S1 in S2
```
### Copy Assignment(=)
```cpp
Student S1(100, 2000);
Student S2(200, 3000);
S1=S2
```
## Destructor
+ Same name
+ No return type
+ No input arguments
```cpp
~Student() {
    cout<<"Destructor called";
    // major use case is to free the heap memory
}
```