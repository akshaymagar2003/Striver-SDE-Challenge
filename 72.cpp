#include<bits/stdc++.h>
void findMedian(int *arr, int n)
{int median;
  vector<int> temp;
    for (int i = 0; i < n; i++) {
        temp.push_back(arr[i]);
        sort(temp.begin(), temp.end());

        
        if (i % 2 == 0) {
            median = temp[i / 2];
        } else {
            median = (temp[i / 2] + temp[(i + 1) / 2]) / 2;
        }

       cout << median << " ";
    }
}
