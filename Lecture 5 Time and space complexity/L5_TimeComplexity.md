# Time and space complexity
### How good or bad a solution is, in terms of Time and Space

## Time
+ In terms of a function of the input size
+ Experimental analysis is a way to calculate/.. But tiring
    + Disadvantages : Diiferent results for same input
    + Test case generation
    + Code each solution
        + Not at all useful
    + Time consuming

## Big O notation
+ Number of unit operations to get to the final answers
+ Highest power
+ Ignore coefficients

### Algorithm A is called O(f(n)), if time taken by A for input n <= k*f(fn)

1. Largest element in an array
    + O(n)
2. Bubble Sort
    + O(n^2)

## Linear Search Time Complexity
+ Got to every element and check
+ O(n)

## Insertion Sort
+ Sorted part and unsorted part
+ Insert every element from the unsorted array to the sorted part one by one
+ O(n^2)
+ Best case O(n)

## Selection Sort
+ Each element and go to minimum, then swap the minimum to the front of unsorted part
+ O(n^2)

## Recursive Algorithm
+ Recurrence Relation
+ Can be solved by `back substitution`
+ For example: 
    + factorial
        + `T(n) = T(n-1) + k`
        + O(n)
    + Binary Search
        + `T(n) = k + T(n/2)`
        + O(log n)

## Fibonacci Time Complexity Ananlysis
### recurrance
+ `T(n) = T(n-1) + T(n-2) + k`
+ O(2^n)

## Space
+ Space required as a function of input size
+ Auxilliary space to be specific
+ Maximum space required at any point of time during execution of program
+ Recursion
    + length of the call stack

## Bubble Sort space complexity
+ O(1)

## Binary Search
+ O(log n)

## Merge sort
+ O(n)
+ the array created when merging two sorted half arrays

## Fibonacci Space analysis
+ O(n)
+ maximum number of functions in call stack