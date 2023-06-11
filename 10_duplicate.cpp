#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
unordered_map<int,int>um;
for (int i = 0; i < n; i++) {
     um[arr[i]]++;

}
int p=0;
for (auto x : um) {
  if (x.second> 1) {
  p=x.first;
  }
}
return p;
}
