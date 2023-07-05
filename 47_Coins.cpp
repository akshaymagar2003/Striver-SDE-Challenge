#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{  vector<int>coins={1000,500,100,50,20,10,5,2,1};
    int ans=0;
    for(auto x:coins){
        ans+=amount/x;
        amount=amount%x;
    }
    return ans;
}
