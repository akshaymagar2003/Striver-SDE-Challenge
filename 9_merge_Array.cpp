#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
   sort(arr1.begin(),arr1.end());
	int p=0;
        for (int i = 0; i < n; i++) {
        
		arr1[i]=arr2[p];
		p++;
		}
		sort(arr1.begin(),arr1.end());
		return arr1;
}
