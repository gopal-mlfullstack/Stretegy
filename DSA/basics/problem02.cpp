#include <iostream>
using namespace std;

int main() {
    //// Swap two numbers
    // take two integers a, b
    // swap them without using a third variable
    // print swapped values
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a;
    cin >> b;
    cout << "Original(You typed): " << a << " " << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "Swapped: " << a << " " << b << endl;
    return 0;

}
