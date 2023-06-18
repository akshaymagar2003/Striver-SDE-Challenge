#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
  int n = input.size();
    int maxLength = 0;
    int i = 0, j = 0;
   unordered_set<char> uniqueChars;

    while (i < n && j < n) {
        if (uniqueChars.find(input[j]) == uniqueChars.end()) {
           
            uniqueChars.insert(input[j]);
            maxLength = max(maxLength, j - i + 1);
            j++;
        } else {
            
            uniqueChars.erase(input[i]);
            i++;
        }
    }

    return maxLength;
}
