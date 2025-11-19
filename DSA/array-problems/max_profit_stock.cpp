#include <bits/stdc++.h>
using namespace std;

/*
 ✅ 2. Best Time to Buy and Sell Stock

 Problem:
 Given an array where prices[i] is the stock price on day i,
find the maximum profit you can achieve by buying on one day and selling later.

Example:
Input: prices = [7,1,5,3,6,4]
Output: 5
Reason: Buy at 1 → sell at 6
*/

int max_profit(vector<int>& prices){
    int min_price = INT_MAX;
    int max_profit = 0;

    for (int price: prices){
        min_price = min(min_price, price);
        max_profit = max(max_profit, price - min_price);
    }
    return max_profit;
}

int main(){

    vector<int> prices = {7,1,5,3,6,4};
    int result = max_profit(prices);

    cout << "Result is: " << result << endl;


    return 0;
}

