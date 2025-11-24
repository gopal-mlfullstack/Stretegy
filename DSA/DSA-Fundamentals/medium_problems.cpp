#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "I am currently working with medium level questions - C++ Fundamentals" << endl;

    /////---- Problem 01: Remove duplicates from sorted array in-place
    vector <int> numbers = {1, 3, 3, 5, 7, 7, 21, 23, 23};

    int i = 0;
    for (int j = 1; j < numbers.size(); j++){
        if (numbers[j] != numbers[i]){
            i++;
            numbers[i] = numbers[j];
        }
    }

    cout << "New length: " << i + 1 << endl;

    cout << "Vector Values: ";
    for (int num: numbers){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
