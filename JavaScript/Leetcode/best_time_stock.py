"""
💹 Problem: Best Time to Buy and Sell Stock
Given:
An array prices where prices[i] is the price of a given stock on the iᵗʰ day.
Task:
Find the maximum profit you can achieve.
You may complete at most one transaction (i.e., buy one and sell one share of the stock).
If you cannot achieve any profit, return 0.
🔹 Example 1
Input:
prices = [7,1,5,3,6,4]
Output:
5
Explanation:
Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6 - 1 = 5.
Note that you must buy before you sell.
🔹 Example 2
Input:
prices = [7,6,4,3,1]
Output
Explanation:
In this case, no transactions can be made since prices keep decreasing — no profit possible.
⚙️ Constraints
1 <= prices.length <= 10^5
0 <= prices[i] <= 10^4
"""

def stock_profit(prices):
    minimum_price = float("inf")
    max_profit = 0
    for price in prices:
        if price < minimum_price:
            minimum_price = price
        else:
            profit = price - minimum_price
            if profit > max_profit:
                max_profit = profit
    return max_profit


print(stock_profit([7, 1, 5, 3,  6, 4]))

