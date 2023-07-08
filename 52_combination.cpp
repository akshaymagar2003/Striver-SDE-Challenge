#include<bits/stdc++.h>
void solve(int i,int sum,int k,vector<int> &num,vector<vector<int>> &st,vector<int> &v){

 if(i==num.size() ){
      
     if(sum==k)st.push_back(v);

return ;

 }

solve(i+1,sum,k,num,st,v);

v.push_back(num[i]);

solve(i+1,sum+num[i],k,num,st,v);

v.pop_back();

 

}

 

vector<vector<int>>  combinationSum2(vector<int> &arr, int n, int k)

{

 

vector<vector<int>> st;

    vector<int> v;

    

solve(0,0,k,arr,st,v);

 for(auto &x: st){
	 sort(x.begin(),x.end());
 }
 set<vector<int>>s(st.begin(),st.end());
 st.clear();
 for(auto x:s){
	 st.push_back(x);
 }

return st;

}
