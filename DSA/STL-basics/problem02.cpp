#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*
     Problem 7: Find Maximum
     Take n integers in a vector
     Find and print the maximum element (don't use max_element, use a loop)
     */
    vector<int> numbers;
    int n;
    cout << "How many numbers you want to store?: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        int number;
        cout << "Enter number: ";
        cin >> number;
        numbers.push_back(number);
    }
    cout << "Numbers: ";
    for (int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << " ";
    }
    cout << endl;

    // i will find maximum element here
    int max = numbers[0];
    for (int i = 0; i < numbers.size(); i++){
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    cout << endl;

    cout << "Maximum Value is: " << max << endl;

    return 0;
}
