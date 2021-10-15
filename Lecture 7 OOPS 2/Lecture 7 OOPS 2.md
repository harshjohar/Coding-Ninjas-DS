# OOPS 2
```cpp
class Student {
    int age;
    char *name;

    public:
    Student(int age, char *name) {
        this->age = age;
        this->name = name;
    }

    void display() {
        cout<<name<<" "<<age<<endl;
    }
}
```
## Shallow copy and deep copy
### Shallow copy
Copying of just the address of the object. For example in case of an array, only the address of 0th index is bing copied.

### Deep Copy
Copying of actual object, not just a pointer to it's location in memory.

## Copy Constructor
```cpp
class Student {
    int age; 
    char* name;
    public:
    Student(int age, char* name) {
        this-> age = age;
        // shallow copy
        // this-> name = name;

        // deep copy
        this-> name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }

    // copy constructor
    Student(Student const &s) {
        this-> age = s.age;
        // this-> name = s.name; -> shallow copy

        // Deep Copy
        this->name = new char[strlen(s.name)+1];
        strcpy(this->name, name);
    }

    void display() {
        cout<<name<<" "<<age<<endl;
    }
};
```

## Initialisation List
Used to allocate memory to the const variables and reference variables.
```cpp
class Student {
public:
    int age;
    const int rollNumber;

    // initialisation list
    Student(int r) : rollNumber(r) {
        // rollNumber = r;
    }
}
```