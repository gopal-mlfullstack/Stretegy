#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
#include <climits>
#include <unordered_map>
using namespace std;



unordered_map<int, int> counter(vector<int> nums){
    unordered_map <int, int> count;

    for (int num: nums){
        count[num]++;
    }
    return count;
}





int main(){
    /*
    //problem09: Sort and Search
    //take n integers in a vector
    //sort them in ascending order
    // take another integer as input (found or not found)
    int n,target;
    vector<int> nums;
    cout << "Enter length(int): ";
    cin >> n;

    for (int i = 0; i < n; i++){
        int value;
        cout << "Enter Number: ";
        cin >> value;
        nums.push_back(value);
    }
    cout << "Original Values: "<< endl;
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;


    sort(nums.begin(), nums.end());
    cout << "Sorted Version: "<< endl;
    for (int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Enter a Number(search): ";
    cin >> target;

    if (binary_search(nums.begin(), nums.end(), target)){
        cout << target << " found in the vector" << endl;
    } else {
        cout << target << " not found" << endl;
    }
    */

    //------ problem 9 Remove duplicates
    // take n integer in a vector
    //sort the vector
    // remove duplicate elements
    // Hint: After sorting, dupicates are adjacent use a loop or look up unique
    /*
    vector <int> nums;
    int n;
    cout << "Enter length: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        int num;
        cout << "Enter a number: ";
        cin >> num;
        nums.push_back(num);

    }

    cout << "Original Vector: " << endl;
    for (int num: nums){
        cout << num << " ";
    }
    cout << endl;

    sort(nums.begin(), nums.end());
    cout << "Sorted Vector: " << endl;
    for (int num: nums){
        cout << num << " ";
    }
    cout << endl;

    auto last = unique(nums.begin(), nums.end());
    nums.erase(last, nums.end());

    cout << "Unique elements: "<< endl;
    for (int num: nums) {
        cout << num << " ";
    }
    cout << endl;
    */

    //----------------
    // Palindrome check
    // Take a string as input
    // Check if it is a Palindrome(reads same forwards and backwards)
    // print yes or no
    // Hint: Compare original string with reverse statement

    /*
    string str;

    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Original: "<< str << endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    str.erase(remove(str.begin(), str.end(), ' '), str.end());

    string reversed = str;
    reverse(reversed.begin(), reversed.end());

    cout << "Reversed Form: " << reversed << endl;
    cout << "Is Palindrome: "<<((str == reversed) ? "Yes": "No") << endl;
    */


    //--------------
    // problem 12: second largest
    // take n integer in a vector
    // find and print the second largest element
    // hint: sort in descending order and pick the second element, or use smarter loop approach
    /*
    vector <int> nums;
    int n;
    cout << "length: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        int value;
        cout << "Enter number: ";
        cin >> value;
        nums.push_back(value);
    }
    cout << "Numbers: " << endl;
    for (int num: nums){
        cout << num << " ";
    }
    cout << endl;

    if (n < 2){
        cout << "Need at least two numbers!" << endl;
        return 0;
    }

    int max_element = nums[0];
    int second_max = INT_MIN;
    for (int num: nums){
        if (num > max_element){
            second_max = max_element;
            max_element = num;
        } else if(num > second_max && max_element > num) {
            second_max = num;

        }
    }

    cout << "Maximum: " << max_element << endl;
    cout << "Second Maximum: " << second_max << endl;
    */


    //------------
    // Problem 13: Count Vowels
    // Take a string as input
    //cout how many vowels (a, e, i, o, u) it contains.
    // print the count
    /*
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int count = 0;

    for (char ch: str){
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count++;
        }
    }

    cout << "String: " << str << endl;
    cout << "Total number of vowels: " << count << endl;

    */


    ///-----------------------
    //Problem 14: Frequency counter
    // take n integers in a vector.
    // sort the vector
    // print each unique element & how many times it appears

    vector <int> nums;
    int n;
    cout << "length: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        int value;
        cout << "Enter a number: ";
        cin >> value;
        nums.push_back(value);
    }


    cout << "Original Values: " << endl;
    for (int num: nums){
        cout << num << " ";
    }
    cout << endl;

    unordered_map<int, int> result = counter(nums);
    cout << "Frequency" << endl;
    for (auto pair: result){
        cout << pair.first << " -> " << pair.second << endl;
    }



    return 0;
}
