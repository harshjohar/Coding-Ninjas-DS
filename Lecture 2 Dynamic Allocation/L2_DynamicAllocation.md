# Address Typecasting
+ implicit typecasting
    + without mentioning the data type on rhs
+ explicit typecasting
    + mention the data type on rhs
+ little endian and big endian system... refer CAO

# Reference and Pass By reference
+ Reference Variables
    + pointing to same chunk of memory
    + `int& j = i;`
+ USE
    + passed into functions

# Dynamic Memory Allocation
+ stack memory and heap memory
+ when heap memory is used, it is called dynamic memory allocation
+ `new` -- returns the address, store it in a pointer
+ the size of array should be known at the compile time.
+ to get the size at runtime, always use heap memory positively.
+ static = auto release
+ dynamic = manual release
    + using `delete`

# Dynamic Allocation of 2D arrays
+ array of integer pointers
+ each pointer points to a new array

# Macros and Global Variables
+ `#define`
+ gloabl variables, not a good practice

# inline and default arguments
+ ternery operator
+ inline 
    + function copied to the function call...
    + compile time
    + mostly single line
+ default arguments
    + always start from rightmost position

# Constant Variables
