#include <iostream>

using namespace std;

int main() {
    //// Simple Calculator
    // take two integer as input
    // Print their sum, difference, product, and division (as double)

    cout << "SIMPLE CALCULLATOR" << endl;
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // printing their result
    cout << "Sum: " << num1 + num2 << endl;
    cout << "Difference: " << num1 - num2 << endl;
    cout << "Product: " << num1 * num2 << endl;
    cout << "Division: " <<  num1 / num2 << endl;

    return 0;
}
