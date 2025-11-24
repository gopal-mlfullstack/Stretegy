

#include <iostream>
#include <vector>
#include <array>
#include <stack>
#include <queue>
#include <map>
#include <set>
using namespace std;

int main(){
    // cout << "My name is Gopal Mahato, I am currently working with fundamentals of DSA using C++!" << endl;
    //
    // int x = 7; // integer type takes 4 byte of memory
    // long long y = 1e18; // 8 bytes - use for large numbers
    // char z = 'A'; // 1 byte
    // double pi = 3.14159; //8 bytes
    // cout << "Size of int: " << sizeof(x) << " bytes" << endl;
    // cout << "Size of long long: " << sizeof(y) << " bytes" << endl;
    // cout << "Size of char: " << sizeof(z) << " bytes" << endl;
    // cout << "Size of double: " << sizeof(pi) << " bytes" << endl;

    //------ 1.2 Pointers and References
    // pointer: A variable that stores memory address of another variable.
    int x = 42;  // here x is at address 1000
    int* ptr = &x; // ptr stores 1000
    cout << "Value of ptr: " << ptr <<  endl;
    // When to  use what:
    // Pointers: Dynamic memory, linked lists, trees, optional values
    // Reference: Function parameters(avoid copies), cleaner syntax


    ///------ STL Basics
    // Vector - Dynamic Array/*
    // vector<int> v;
    // v.push_back(7);
    // v.push_back(17);
    // v.push_back(00);
    // v.push_back(78);
    // v.push_back(89);
    // v.push_back(9);
    // v.pop_back();
    //
    // cout << "Vector Elements: ";
    // for (int value: v){
    //     cout << value << " ";
    // }
    // cout << endl;
    //
    // cout << "First Element: " << v[0] << endl;
    // cout << "Size: " << v.size() << endl;
    //
    // // Declaration with vector
    // vector<int> nums(5);
    // cout << "Vector Elements: ";
    // for (int num: nums){
    //     cout << num << " ";
    // }
    // cout << endl;
    // vector <int> numbers(7, 7);
    // cout << "Vector Elements: ";
    // for (int value: numbers){
    //     cout << value << " ";
    // }
    // cout << endl;*/

    ////- Array -Fixed Size
    // array<int, 5> arr = {1, 3, 4, 76, 7};
    // cout << "Array Elements: ";
    // for (int value: arr){
    //     cout << value << " ";
    // }
    // cout << endl;

    ///// - Stack
    // stack<int> stk;
    // stk.push(7);
    // stk.push(17);
    //
    // cout << "Last Value: " << stk.top() << endl;
    // stk.pop(); //remove top
    // cout << stk.top() << endl;


    ////// QUEUE - FIFO
    // queue<int> q;
    // q.push(10);
    // q.push(7);
    // cout << q.front();
    // q.pop(); // remove front

    //////// MAP -Key-Value Pairs
    // map<string, string> info;
    // // To add update We can do like this
    // info["Gopal"] = "Software Engineer";
    // info["Ujjwal"] = "Software Engineer";
    // info["Manaranjan"] = "Backend Engineer";
    // cout << "Profession of Gopal: " << info["Gopal"] << endl;
    //
    // map<string, int> age_info;
    //
    // age_info["Gopal Mahato"] = 19;
    // age_info["Ujjwal Das"] = 19;
    // age_info["Manaranjan Mandana"] = 19;
    // age_info["Yubraj Sing Sardar"] = 21;
    //
    // cout << "Age of Gopal Mahato: " << age_info["Gopal Mahato"] << endl;
    // cout << "Age of Ujjwal Das: " << age_info["Ujjwal Das"] << endl;
    // cout << "Age of Manaranjan Mandana: " << age_info["Manaranjan Mandana"] << endl;
    // cout <<"Age of Yubraj Sing Sardar: " <<  age_info["Yubraj Sing Sardar"] << endl;
    //
    // // to check existence
    // if (age_info.find("Gopal Mahato") != age_info.end()) {
    //     cout << "Hello Gopal You are " << age_info["Gopal Mahato"] << " Years Old!" << endl;
    // }

    ////// Set - Unique Elements
/*
    set<int> s;
    s.insert(7);
    s.insert(7);
    s.insert(40000000);
    s.insert(90);
    s.insert(0);
    s.insert(27);
    s.insert(17);
    cout << "Set Elements: ";
    for (int value: s){
        cout << value << " ";
    }
    cout << endl;
    cout << "Size is: " << s.size() << endl;*/





    return 0;
}
