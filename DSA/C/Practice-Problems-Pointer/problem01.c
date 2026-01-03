/// Problem 1: Swap Two numbers (classic!)
// Write a function that swaps two numbers using pointers.


#include <stdio.h>

// YOUR CODE HERE: Complete this function
void swap(int *a, int *b) {
    // Hint: You need a temporary variable
    int temp = *a;
    *a = *b;
    *b = temp;





}

int main() {
    int x = 5, y = 10;
    printf("Before: x = %d, y = %d\n", x, y);

    swap(&x, &y);  // Pass addresses

    printf("After: x = %d, y = %d\n", x, y);
    return 0;
}

/*
**Expected Output:**
Before: x = 5, y = 10
After: x = 10, y = 5
*/
