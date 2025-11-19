#include <iostream>
#include <vector>
#include <unordered_set>


/*
 Intersection of Two Arrays (LeetCode 349)
 Return unique numbers present in both arrays.
 ✅ Problem
 Given two integer arrays nums1 and nums2, return an array of unique elements present in both arrays.
 📘 Example 1
 Input:
 nums1 = [1,2,2,1]
 nums2 = [2,2]
 Output:
 [2]

*/


using namespace std;

vector<int> intersec(vector<int>& num1, vector<int>& num2){
    unordered_set<int> set1(num1.begin(), num1.end());
    unordered_set<int> result;

    for (int num: num2){
        if (set1.count(num)){
            result.insert(num);
        }
    }

    return vector<int> (result.begin(), result.end());


}





int main(){
    vector<int> num1 = {1, 2, 2, 1};
    vector<int> num2 = {2, 2};
    vector<int> result = intersec(num1, num2);
    cout << "Elements: ";
    for (int num: result){
        cout << num << " ";
    }
    cout << endl;




    return 0;
}
