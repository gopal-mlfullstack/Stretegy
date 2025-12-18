#include <stdio.h>

void insertion_sort(int arr[], int n){
    for (int i = 1; i < n; i++){
        // Start from the second element (index 1)
        int key = arr[i]; // The element to be inserted
        int j = i - 1;  // Start comparing with previous elements


        // Move elements greater than key one position ahead

        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        };

        // insert the key at its correct position
        arr[j + 1] = key;




    }
}

int main(){
    int arr[] = {5, 2, 4, 6, 1, 3};
    insertion_sort(arr, sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ", arr[i]);
    }

    printf("\n");


    return 0;
}
