#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
    Take n (number of elements) as input
    Take n integers and store in a vector
    Print all elements in reverse order (without using reverse())
    */
    vector<int> numbers;
    int n;
    cout << "How many numbers you want to store?: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        int number;
        cout << "Enter value: ";
        cin >> number;
        numbers.push_back(number);
    }
    cout << "You Entered: ";
    for (int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }
    cout << endl;


    // I will do reverse here
    int left, right, temp;
    left = 0;
    right = numbers.size() - 1;

    while (left < right) {
        temp = numbers[right];
        numbers[right] = numbers[left];
        numbers[left] = temp;
        left++;
        right--;
    }
    cout << "Reverse Form: ";
    for (int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }
    cout << endl;




    return 0;
}
