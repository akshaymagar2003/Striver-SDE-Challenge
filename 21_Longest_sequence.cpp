#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    int maxLength = 0;
    int count = 1;
    for(int i = 1; i < n; i++)

    {

        if(arr[i]==arr[i-1])

            continue;

        else if(arr[i] == arr[i-1]+1)

            count++;

        else{

            maxLength = max(maxLength, count);

            count = 1;

        }

    }

    maxLength = max(maxLength, count);

    return maxLength;
}
