
#include <bits/stdc++.h>

using namespace std;

void helper(unordered_set<string>& substrings, const string& word, int index) {
    if (index == word.size()) {
        return;
    }

    string substring = "";
    for (int i = index; i < word.size(); i++) {
        substring += word[i];
        substrings.insert(substring);
    }

    helper(substrings, word, index + 1);
}

int distinctSubstring(const string& word) {
    unordered_set<string> substrings;
    helper(substrings, word, 0);
    return substrings.size();
}
