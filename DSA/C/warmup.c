#include <stdio.h>

/*
Before DSA in C
I need know and practice these three concepts
1. Pointer (most important)
2. Dynamic Memory Allocation
3. Structures

 */

 // What is Pointer?
 // A Pointer is a variable that stores the memory address of another variable.

 /* Thinking like this: My house has an address (123 Main St). A pointer is like writing down that address on paper. The papper doesn't contain my house, just the location to find it! */

int main(){

    printf("Hello, I am writing C Programs!\n");

    int num = 7;     // This is regular variable expression
    int *ptr;        // This is Pointer declaration (* means "pointer to int" )
    ptr = &num; // & means "address of"

    printf("Value: %d\n", num);
    printf("Address: %p\n", ptr);
    printf("Value of the address: %d\n", *ptr);

    int x = 5;
    int *p = &x;

    printf("Value of X: %d\n", *p);

    return 0;
}

/* Key concepts:
 & = "Address of operator"
 * in declaration = "this is a pointer"
 * with existing pointer = "value at this address" 
 */
