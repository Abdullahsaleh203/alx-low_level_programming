 # Function pointer
---
*function pointer*  is a special type of pointer that points to a function instead of pointing to a regular data variable. Function pointers allow you to store the address of a function and then call that function indirectly through the pointer. This feature provides a powerful way to achieve dynamic behavior in C programs.

Function pointers are particularly useful in situations where you need to pass functions as arguments to other functions, or when you want to implement function dispatching mechanisms based on runtime conditions.
To declare a function pointer, you use the syntax:
```C
return_type (*function_pointer_name)(parameter_list);
```
___
## Let's break down the components:

* return_type: The return type of the function that the function pointer points to.
* function_pointer_name: The name of the function pointer.
* parameter_list: The list of parameters the function takes. If the function doesn't take any parameters, you can leave this empty or use void.
* Here's a simple example to illustrate how to declare, assign, and use function pointers:
```C
#include <stdio.h>

// Function that takes two integers and returns their sum
int add(int a, int b) {
    return a + b;
}

// Function that takes two integers and returns their difference
int subtract(int a, int b) {
    return a - b;
}

int main() {
    int (*operation)(int, int); // Declaration of function pointer

    operation = add; // Assigning the address of the 'add' function to the pointer
    printf("Result of add function: %d\n", operation(5, 3)); // Calling the function using the pointer

    operation = subtract; // Assigning the address of the 'subtract' function to the pointer
    printf("Result of subtract function: %d\n", operation(5, 3)); // Calling the function using the pointer

    return 0;
}
```
---


