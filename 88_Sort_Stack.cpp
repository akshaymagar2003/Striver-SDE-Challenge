#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{   vector<int>v;
	while(stack.empty()==false){

        v.push_back(stack.top());
stack.pop();
	}
	sort(v.begin(),v.end());

	for(auto x:v){
		stack.push(x);
	}
}
