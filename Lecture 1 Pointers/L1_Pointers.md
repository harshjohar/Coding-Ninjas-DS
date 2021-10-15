# Pointers
+ Variables which store address of other variables.

## `Address of` operator
+ `&` operator retreives the address

## Initialisation of pointer
+ `*` operator
+ `int* p = &i;`
+ `data_type * ptr_name = & var_name`

## Accessing data
+ `*` on RHS -- dereferance operator
+ `cout<<*ptr<<endl`

# Pointers Arthematic
+ `sizeof()` on a pointer.
+ all pointers have a same size
+ pointers add acc to their type, as int pointer adds 4 to it on doing `ptr++`
## USE:
+ in arrays, for indexing
+ increment and decrement

# Arrays and Pointers
+ address of array is the address of the first element
+ `a= &a[0]`
+ `a+i = a[i]`
+ Get ith element of array
    + a[i]
    + *(a+i)
    + i[a] -- strangeeeeee, but effectively decoded as *(i+a)
+ a = &a, both store the address of the first element of array

# Characters and pointers
+ when we print, it prints out the whole char array.
+ when we try to print a char using pointer,it is weird, dont do that.
+ `char *pstr = "abcde";`

# Pointers and Functions
+ pointer can be passed into the function
+ by value and by reference
+ when we pass a pointer, the variable whose address the pointer stores, is passed as refernce.
+ `array` is always passed as reference
+ can also pass part of an array into function

# Double Pointers
