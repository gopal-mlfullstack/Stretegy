// Problem 2: Find Max Using Pointers
// Write a function that finds the maximum of two numbers using pointers.

#include <stdio.h>

// Return pointer to the larger number
int* findMax(int *a, int *b) {
    // YOUR CODE HERE
    if (*a > *b) return *a;
    else return *b;

}

int main() {
    int num1 = 25, num2 = 40;
    int *max = findMax(&num1, &num2);

    printf("Maximum value: %d\n", *max);
    return 0;
}
