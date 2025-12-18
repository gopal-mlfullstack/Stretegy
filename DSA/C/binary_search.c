#include <stdio.h>

int binary_search(int arr[], int n, int target){
    int start = 0, end = n - 1;

    while (start <= end){
        int mid = (start + end) / 2;

        if (arr[mid] == target){
            return mid;
        }

        else if (arr[mid] > target){
            end = mid - 1;
        }
        else if (arr[mid] < target){
            start = mid + 1;
        }
        return -1;

    }



}


int main(){
    int arr[] = {1, 4, 7, 9, 600, 8000}, n = sizeof(arr) / sizeof(arr[0]), target = 600;

    printf("%d", binary_search(arr, n, target));





    return 0;
}
