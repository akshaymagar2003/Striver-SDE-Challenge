#include <bits/stdc++.h> 
int maximumXor(vector<int> nums)
{
    int maxXOR = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int xorValue = nums[i] ^ nums[j];
            maxXOR = max(maxXOR, xorValue);
        }
    }

    return maxXOR;
}
