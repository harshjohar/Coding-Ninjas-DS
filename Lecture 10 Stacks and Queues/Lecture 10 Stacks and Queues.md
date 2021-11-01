# Stack
Abstract Data Type : Elements added and removed in a specific order.

FIFO : First In First Out

## Operations
Only these functions are available in public
1. push() - insert element at top
2. pop() - remove element at top
3. top() - access the element at top
4. size() - obvious huh?
5. isEmpty()

## Recursion uses stack DS

## Stack Using Array
Implemented in sortnsearch repo (array implementation)
## Stack Using Dyanmic Array (Dynamic Stack)
Implemented in sortnsearch repo (vector implementation)

## Templates
Class Pair
```cpp
class Pair {
    int x;
    int y;
    public:
    void setX(int x) {
        this->x = x;
    }
    int getX() {
        return x;
    }
    void setY(int y) {
        this->y = y;
    }
    int getY() {
        return y;
    }
};
```
Now what is we need a class Pair, but it contains floats, or chars.

Use Temporary Data Type
```cpp
template<typename T>

class Pair {
    T x;
    T y;
    public:
    void setX(T x) {
        this->x = x;
    }
    int getX() {
        return x;
    }
    void setY(T y) {
        this->y = y;
    }
    int getY() {
        return y;
    }
};
```
T should be specified the moment we create the object. It is enclosed in `<>`.

Multiple temp data types can be used in a single object/class... just specify before defining class.

`template <typename T, typename V>`

Similarly we can create stack using templates.
```cpp
#include <climits>

template <typename T>
class StackUsingArray {
	T *data;
	int nextIndex;
	int capacity;	

	public :

	StackUsingArray() {
		data = new T[4];
		nextIndex = 0;
		capacity = 4;
	}

	// return the number of elements present in my stack
	int size() {
		return nextIndex;
	}

	bool isEmpty() {
		/*
		if(nextIndex == 0) {
			return true;
		}
		else {
			return false;
		}
		*/

		return nextIndex == 0;
	}

	// insert element
	void push(T element) {
		if(nextIndex == capacity) {
			T *newData = new T[2 * capacity];
			for(int i = 0; i < capacity; i++) {
				newData[i] = data[i];
			}
			capacity *= 2;
			delete [] data;
			data = newData;
			/*cout << "Stack full " << endl;
			return;*/
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	// delete element
	T pop() {
		if(isEmpty()) {
			cout << "Stack is empty " << endl;
			return 0;	
		}
		nextIndex--;
		return data[nextIndex];
	}
	T top() {
		if(isEmpty()) {
			cout << "Stack is empty " << endl;
			return 0;	
		}
		return data[nextIndex - 1];
};
```
