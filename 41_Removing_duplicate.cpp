#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
  	    set<int>p;
        for (auto i : arr) {
        p.insert(i);
		}
		return p.size();
}
