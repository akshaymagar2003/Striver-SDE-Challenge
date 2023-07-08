#include<bits/stdc++.h>

string kthPermutation(int N, int K) {
   vector<int> nums(N);
    for (int i = 0; i < N; ++i) {
        nums[i] = i + 1;
    }
    
    for (int i = 1; i < K; ++i) {
        next_permutation(nums.begin(), nums.end());
    }
    
    string result;
    for (int num : nums) {
        result += to_string(num);
    }
    
    return result;
}
