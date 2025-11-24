#include <iostream>
#include <vector>

using namespace std;


/*
 Problem:
 Given an array representing a number (digits), add one to the number.
 Example:
 Input: digits = [1,2,3]
 Output: [1,2,4]

 Another example (carry case):
 Input: digits = [9,9,9]
 Output: [1,0,0,0]
 */
vector<int> plus_one(vector<int>& digits){
    for (int i = digits.size() - 1; i >= 0; i--){
        if (digits[i] < 9){
            digits[i] += 1;
            return digits;
        }
        else {
            digits[i] = 0;
        }
        }

    digits.insert(digits.begin(), 1);
    return digits;
}






int main(){
    vector<int> digits = {2, 9, 9};
    plus_one(digits);
    cout << "Plus one: ";
    for (int digit: digits){
        cout << digit << " ";
    }
    cout << endl;


    return 0;
}
