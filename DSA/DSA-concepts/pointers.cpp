#include <iostream>
#include <vector>
#include <string>

using namespace std;


void doubleValue(int* p) {
    *p = 2 * (*p);
}

void findMax(int* a, int* b){
    if (*b > *a){
        *a = *b;
    }
}

void increment(int* p){
    //Incrementing the value pointed by p
    *p = *p + 1;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortThree(int* x, int* y, int* z){
    if (*x > *y) swap(*x, *y);
    if (*x > *z) swap(*x, *z);
    if(*y > *z) swap(*y, *z);
}

int arraySum(int* arr, int size) {
    // returning sum of all elements
    // cluade says: arr[i] is same as *(arr + i)
    int sum_elements = 0;
    for (int i = 0; i < size; i++){
        sum_elements += *(arr + i);

    }
    return sum_elements;
}

int main(){

    // Three Core concepts
    //--- concept A: Regular Variables

    int age = 19;
    // string name;
    // cout << "Age is: " << age << endl;
    // cout << "What's your name: ";
    // getline(cin, name);
    // cout << "Hello, " << name << endl;
    //--- Concept B: Getting the address (&)
    /*
    cout << "Memory address of age: " << &age << endl;
    // The & symbol means "where is this box located?" Every variable has a memory address.

    //-- Pointer Variables
    int* ptr = &age;
    cout << "Address of ptr pointer: " << ptr << endl;
    cout << "Value of ptr pointer: " << *ptr << endl;
    *ptr = 20;
    cout << "Value of ptr pointer: " << *ptr << endl;
    */


    /*
    // int x = 10;
    // cout << "Value of x: " << x << endl;
    // int* ptr = &x; // pointer to x
    //
    // // Key symbols: // * (asterisk) = declares a pointer OR dereference it
    // // & (ampersand) = "address-of" operator
    // cout << "Memory address of x: " << &x << endl;
    // cout << "Value stored in ptr: " << ptr << endl;
    // cout << "Value pointed by ptr: " << *ptr << endl;
    // // Modifying through pointer
    // *ptr = 30;
    // cout << "New value: " << x << endl;
    */

    // Some practice problems
    //--- Level 1: Basic Understanding
    /*
    //-- problem 1: Predicting the Output
    int a = 15;
    int* p = &a;
    cout << a << endl; // 15
    cout << *p << endl; // 15
    *p = 25;
    cout << a << endl; // 25

    //-- problem 2: Fill in the blanks
    // int x = 100;
    // int* ptr = ____;  // Store address of x
    // cout << ____ << endl;  // Print value of x using pointer
    // ____ = 200;  // Change x to 200 using pointer
    int x = 100;
    int* ptr = &x;
    cout << *ptr << endl;
    *ptr = 200;
    cout << "Changed Value of x: " << x << endl;

    //--- problem 03: Fix the Error
    // int num = 10;
    // int* ptr;
    // cout << *ptr;  // What's wrong? How to fix?
    int num = 10;
    int* ptr_ = &num;
    cout << *ptr_ << endl;
    */

    //--- Level2: Simple Funcions
    ///--problem 4: Double a number: write a function that takes a pointer to an integer and doubles its value.

    // int x = 7;
    // doubleValue(&x);
    // cout << x << endl;

    //---problem 5: Write a function that takes two integers by pointer and modifies the fiirst to hold the maximum of both.

    // int x = 7, y = 6;
    // findMax(&x, &y);
    // cout << "x: " << 10 << endl; // should print 10

    //--- problem 6: Increment Function
    // int count = 0;
    // for (int i = 0; i < 5; i++){
    //     increment(&count);
    // }
    // cout << "Count: " << count << endl;

    //--- Level3: Multiple Pointers
    //problem 7: Swap Two Numbers
    // int x = 7, y = 11;
    // swap(&x, &y);
    // cout << x << " " << y << endl; //should print 11 7

    //---problem 8: Three Number Sort: Write a function to arrange three numbers in ascending order using pointers.
    // int x = 7, y = 9, z = 1;
    // sortThree(&x, &y, &z);
    // cout << x << " " << y << " " << z << endl;

    ///// Level 4: Arrays and Pointers
    //problem9: Array sum:
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Sum is: " << arraySum(numbers.data(), numbers.size()) << endl;









    return 0;
}
