#include<bits/stdc++.h>
string reverseString(string &str){
 if (str.empty()) {
        return "";
    }

    string ans;
    stack<string> s;
    int i = 0;

    while (i < str.size()) {
        int start = i;
        while (i < str.size() && str[i] != ' ') {
            i++;
        }
        s.push(str.substr(start, i - start));

        while (i < str.size() && str[i] == ' ') {
            i++;
        }
    }

    while (!s.empty()) {
        ans += s.top();
        s.pop();
		 if (!s.empty()) {
            ans += " "; // Add a space between words
        }
    }

    return ans;
}
