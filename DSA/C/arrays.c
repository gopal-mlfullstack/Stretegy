/*
 Arrays

 What is an Arrays?
 An arrays is a collection of elements of the same data type stored in contiguous memory locations.

 Declaration and Initialization
 */

 // Declaration

#include <stdio.h>
int main(){
    // Declaration
    // int arr[7];

    // Declaration with initialization
    // int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    // Partial initialization (rest are 0)
    // int arr[5] = {1, 7};

    // Size automatically determined
    // int arr[] = {1, 2, 3, 4, 5, 6};


    // // printf("Printing Original Elements: ");
    // // for (int i = 0; i < 7; i++){
    // //     printf("%d ", arr[i]);
    // // }
    //

    ///// Basic Array Operations
    // int arr[6] = {1, 2, 3, 4, 5, 6};

    // // accessing elements
    // printf("First element: %d\n", arr[0]);
    // printf("Third element: %d\n", arr[2]);

    // // modifying elements
    // arr[1] = 25;

    // // traversing array
    // printf("Array elements: ");
    // for (int i = 0; i < 6; i++){
    //     printf("%d ", arr[i]);
    // }

    ////// Array Input from User

    // int n;
    // printf("Enter size of the array: ");
    // scanf("%d", &n);

    // int arr[n]; // declaration

    // printf("Enter %d number of elements:\n", n);
    // for(int i = 0; i < n; i++){
    //     printf("Enter the number: ");
    //     scanf("%d", &arr[i]);
    // }

    // printf("You entered: ");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }

    /////// Finding Sum and Average

    // int arr[] = {1, 2, 3, 4, 5, 6, 7};

    // // finding the length
    // int n = sizeof(arr) / sizeof(arr[0]);

    // int sum = 0;

    // for (int i = 0; i < n; i++){
    //     sum += arr[i];
    // }

    // int average = sum / n;
    // printf("Sum is: %d\n", sum);
    // printf("Average is: %d", average);

    //////// Finding Maximum and Minimum

    // int arr[] = {1, 2, 3, 4, 5};
    // int n = sizeof(arr) / sizeof(arr[0]);

    // int min = arr[0];
    // int max = arr[0];

    // for (int i = 1; i < n; i++) {
    //     if ( arr[i] < min ) min = arr[i];
    //     if (arr[i] > max) max = arr[i];
    // }

    // printf("Arrays Elements: ");
    // for (int i = 0; i < n; i++){
    //     printf("%d ", arr[i]);
    // }

    // printf("\n----------------\n");

    // printf("Max is %d\n", max);
    // printf("Min is %d\n", min);

    ///// Reversing an Array

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, n = sizeof(arr) / sizeof(arr[0]);

    // printing original array
    printf("Original Array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n---------------------------\n");

    // In-place reverse using two pointer
    // initilizing start and end point in the array
    int start = 0, end = n - 1;

    while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("\nReverse form: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nProgram end point\n");



    return 0;
}
