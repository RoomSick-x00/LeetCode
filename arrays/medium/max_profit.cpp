#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int curr_price;
    int max_profit = 0;

    for (int i = 0; i < n; i++)
    {
        curr_price = prices[i];
        int profit = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (prices[j] > curr_price)
            {
                profit = prices[j] - curr_price;
                max_profit = max(profit, max_profit);
            }
        }
    }
    return max_profit;
}

int maxProfit(vector<int> &prices)
{
    int max_profit = 0;
    int min_price = INT_MAX;

    for (int price : prices)
    {
        min_price = min(min_price, price);               
        max_profit = max(max_profit, price - min_price); 
    }
    return max_profit;
}

int main()
{
    vector<int> prices = {7, 3, 5, 6, 4, 1};

    cout << maxProfit(prices);
    return 0;
}