#include <stdio.h>

void selection_sort(int arr[], int n){
    int min_index, temp, i, j;
    for (i = 0; i < n - 1; i++){
        min_index = i;

        for (j = i + 1; j < n; j++){
            if (arr[j] < arr[min_index]){
                min_index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }


}


void print_array(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}



int main(){
    int arr[] = {12, 9, 6, 2, 3, 7, 1}, n = sizeof(arr) / sizeof(arr[0]);
    printf("Original version: ");
    print_array(arr, n);

    printf("Sorted form: ");
    selection_sort(arr, n);
    print_array(arr, n);


    return 0;
}
