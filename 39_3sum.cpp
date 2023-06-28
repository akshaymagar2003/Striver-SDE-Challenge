#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	  sort(arr.begin(), arr.end());

  vector<vector<int>> ans;

  for (int i = 0; i < n - 2; i++) {

    int j = i + 1;

    int k = n - 1;

    while (j < k) {

      if (arr[i] + arr[j] + arr[k] == K && j!=k) {

        ans.push_back({arr[i], arr[j], arr[k]});

        j++;

        k--;

      } else if (arr[i] + arr[j] + arr[k] > K) {

        k--;

      } else {

        j++;

      }

    }

  }

  sort(ans.begin(), ans.end());
set<vector<int>>p;
for (auto i:ans) {
p.insert(i);
}
ans.clear();
for (auto i:p) {
ans.push_back(i);
}
  

  return ans;
}
