#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> nums = {1, 3, 3, 4, 4};
    int result = 0;

    for (int num: nums){
        if (num ^= 0) {
            return result;
        }
    return result;
    }
    cout << "Result: " << result << endl;
    return 0;
}
