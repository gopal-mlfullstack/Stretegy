#include <iostream>
#include <string>
using namespace std;
int main(){
    /*
    cout << "My name is Gopal Mahato" << endl;
    cout << "I am writing C++ Code in my system Arch Linux!" << endl;
    // taking inputs
    //int age;
    //cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << endl;
    */

    // Data types
    int num = 7; // integer: -2,147,483,648 to 2,147,483,648
    long long big = 1e18; // Larger integer use for big numbers
    cout << "Big is " << big << endl;
    float pi = 3.14; // less precise
    double pi2 = 3.14159; // Decimal more precise
    char letter = 'A'; // "Single character"
    bool flag = true; // true or false
    string name = "Gopal"; //Text (need #include <string>)
    cout << "Letter is " << letter << endl;
    cout <<"Is Gopal Consistent? " << flag << endl;
    cout << "String Example: " << name << endl;
    return 0;
}

