
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Vector- Dynamic Array
    // A vector is like an array but can grow/shrink in size.
    // Declaration
    //vector<int> v; // empty vector

    //adding elements
    // v.push_back(7);
    // v.push_back(17);
    // v.push_back(97);
    // cout << "Vector elements: ";
    // for (int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    //cout << endl;

    //--------
    // Vector with initial values
    //vector<int> v = {1, 3, 7, 10};
    //cout << "Vector size " << v.size() << endl;

    //--------
    //Vector with size, all zeros
    // vector <int> v(7);
    // cout << "Size is " << v.size() << endl;
    // cout << "All values: ";
    // for (int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    //-------
    // Vector with first arg in size second is value (every element)
    // vector <int> v(10, 7);
    // cout << "Size is " << v.size() << endl;
    // cout << "All values: ";
    // for (int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;


    //-----------
    // Common operations
    vector <int> v;

    // Adding element at the end
    v.push_back(7);
    v.push_back(17);
    v.push_back(9);
    v.push_back(2);

    //Removing last element
    v.pop_back();

    //v.size I already know

    //Accessing element
    cout << "First index value: " << v[0] << endl;
    cout << "Second index value: " << v[1] << endl;

    // First and Last element access using front and back
    cout << "First element: " << v.front() << endl;
    cout << "Second element: " << v.back() << endl;

    // checking if vector is empty or not
    cout << "Is Empty(v): " << v.empty() << endl; // return 0 cause false

    vector <int> s;
    cout << "Is Empty(s): " << s.empty() << endl; // returns 1 cause true


    // removing all elements
    //v.clear();

    // Iterating
    cout << "Size is " << v.size() << endl;
    cout << "All values: ";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    // range-base for loop
    cout << "\n";
    for (int x: v){
        cout << x << " ";
    }
    cout << endl;



    return 0;
}
