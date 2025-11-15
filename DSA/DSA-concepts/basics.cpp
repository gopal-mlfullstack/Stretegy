#include <bits/stdc++.h>
using namespace std;

// //-- Practice problem: Write function bool isPrime(int n) that returns true if n is prime
//
// bool isPrime(int n){
//     if (n <= 1) return false;
//
//     for (int i = 2; i * i <= n; i++ ){
//         if (n % i == 0) return false;
//
//     }
//     return true;
// }



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // Practice problem: 1
    // Write a program that reads 3 integers and prints them in reverse order using fast I/O
    // int x, y, z;
    // cin >> x >> y >> z;
    // cout << z << " " << y  << " " << x << "\n";
    /////// I want to practice some Fast I/O practice tasks
    //---  problem01: Read 2 integers and print their sum
    // int x, y;
    // cin >> x >> y;
    // cout << "Sum of " << x << " and " << y << " is: " << x+y << endl;
    //--- problem02: Read 3 integers and print the largest
    // int x, y, z, max;
    // cin >> x >> y >> z;
    // if (x > y && x > z) max = x;
    // else if (y > x && y > z) max = y;
    // else max = z;
    //
    // cout << "Largest Value is: " << max << endl;
    //---- problem 3: Read a number N and print "YES" if even else "NO"
    // int N;
    // cin >> N;
    // if (N % 2 == 0) cout << "YES" << endl;
    // else cout << "NO" << endl;
    //----Problem5 Read 5 integers and print them in reverse order
    // int n1, n2, n3, n4, n5;
    // cin >> n1 >> n2 >> n3 >> n4 >> n5;
    // cout << n5 << " " << n4 << " " << n3 << " " << n2 << " " << n1 << endl;
    //--- Read N, then read N integers and print total sum
    // int N, sum = 0;
    // cin >> N;
    //
    // for (int i = 0; i < N; i++){
    //     int n;
    //     cin >> n;
    //     sum += n;
    // }
    //
    // cout << "Sum is: " << sum << endl;

    //------ problem06: Read a string and print its length

    // string str;
    // getline(cin, str);
    // cout << "Length: " << str.length() << endl;

    //---- problem 07: Read a number N and print numbers from 1 to N in one line
    // int N;
    // cin >> N;
    // for (int i = 1; i <= N; i++){
    //     cout << i << " ";
    // }
    // cout << endl;
    //---- Problem-8 Read 2 numbers A and B and print all numbers between them
    /*
     input: 3 7
     output: 3 4 5 6 7
     */
    // int a, b;
    // cin >> a >> b;
    // if (a == b) {
    //     cout << "Equal number! First number must be smaller than the Second number!" << endl;
    //     return 0;
    //
    // } else if (b < a){
    //     cout << "Second number must be greater than the First number!" << endl;
    //     return 0;
    // }
    // for (int i = a; i <= b; i++){
    //     cout << i << " ";
    // }
    // cout << endl;

    //---- Problem 09: Read a string and print reversed
    /*
    input: apple
    output: elppa
    */
    // string str;
    // getline(cin, str);
    // reverse(str.begin(), str.end());
    // cout << str << endl;
    //--- Read N numbers and print How many of them are positive
    // int N, count_pos = 0;
    // cin >> N;
    // for (int i = 0; i < N; i++){
    //     int n;
    //     cin >> n;
    //     if (n > 0) count_pos += 1;
    // }
    // cout << count_pos << endl;


    ///// Grok Section
    //// 2 Loops, Conditionals, Functions
    //-- Practice problem: Write function bool isPrime(int n) that returns true if n is prime
    // Above the main function i will call here
    // int num;
    // cin >> num;
    // cout << isPrime(num) << endl; // return 1 or 0 (1 as     true 0 as false)
    // Arrays and Strings
    // Given a string, count the frequency of each character (case-sensitive).
    vector <int> nums = {1, 2, 3, 3, 4, 6, 7};
    unordered_map<int, int> freq;
    for (int num: nums){
        freq[num]++;
    }
    for (auto &p: freq) {
        cout << p.first << " -> " << p.second << endl;
    }













    return 0;
}
