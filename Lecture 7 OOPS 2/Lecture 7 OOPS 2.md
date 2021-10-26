## Constant Functions
Object can be made constant. Thne no changes permitted.

```cpp
Fraction f1(10, 13); // not const
Fraction const f2(10/17);
```

+ Getter Functions allowed
    + only if the function is marked as `const`
+ Setter Functions not allowed

### Constant Functions
Which doesnt change any property of current object.
```cpp
int getNumerator() const {
    return numerator;
}
```

## Static Members
Belongs to a class, but not to a object.
```cpp
class Student {
public:
    int rollNumber;
    int age;

    static int totalStudents; // total students

    Student() {
        totalStudents++;
    }
};
```
To access the static members
+ `::` scope resolution operator.
```cpp
Student::totalStudents
```
Static properties are inititalised outside the class.
```cpp
int Student :: totalStudents = 0;
```
### Static Functions
Functions accessible to whole class
```cpp
static int getTotalStduents() {
    return totalStudents;
}
```
+ Can access only static properties.
+ No access to `this`

## Operator Overloading
Extend the properties of pre-existing operators to work for the user defined objects.
### Syntax
```
<return_type> operator<type> (<parameters>){
    // definition
}
```
Full implementation in [FractionClass.cpp](./FractionClass.cpp)

# Dyanamic Array
No fixed size
