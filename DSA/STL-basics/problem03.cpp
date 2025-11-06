#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    // Input: Enter a string: hello Output: Reversed string: olleh
    // Gopal Mahato, otaham lapog

    //----- using reverse function
    // string value;
    // cout << "Enter a string: ";
    // getline(cin, value);
    // cout << "Original Value: " << value << endl;
    //
    // reverse(value.begin(), value.end());
    //
    // cout << "Reverse form: " << value << endl;

    //------
    string str;
    string value;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Original String: " << str << endl;
    int left = 0;
    int right = str.length() - 1;
    while (left < right){
        swap(str[left], str[right]);
        left++;
        right--;
    }
    cout << "\nReverse Form: " << str << endl;



    return 0;
}
