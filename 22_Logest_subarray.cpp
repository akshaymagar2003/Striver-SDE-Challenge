#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

int maxi=0;
unordered_map<int,int>um;
int sum=0;
for (int i = 0; i < arr.size(); i++) {
   sum=sum+arr[i];
   if (sum == 0) {
   maxi=max(i+1,maxi);
   } else if (um.find(sum) != um.end()) {
      maxi=max(maxi,i+1-um[sum]);

   } else {
      um[sum]=i+1;
   }
}
return maxi;
}
