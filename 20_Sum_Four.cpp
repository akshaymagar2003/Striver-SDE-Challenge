#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
  

  sort(arr.begin(),arr.end());
  for (int i = 0; i < n - 3; i++) {
  for(int j=i+1;j<n-2;j++)
  {
      int l=j+1;
      int r=n-1;
      while (l < r) {
      int sum=arr[i]+arr[j]+arr[l]+arr[r];
      if(sum==target){
          return "Yes";
      }
      else if( sum<target){
          l++;
      }else r--;
      }
  }
  }
  return "No";
}
