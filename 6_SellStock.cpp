#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
   
    long long int before = prices[0];

    long long int max_profit = INT_MIN;

    int n = prices.size();

    for(int i=0; i<n; i++)

    {

        long long int diff = prices[i] - before;

        max_profit = max(diff, max_profit);

        if(before>prices[i])

        before = prices[i];

    } 

    return max_profit;
}
