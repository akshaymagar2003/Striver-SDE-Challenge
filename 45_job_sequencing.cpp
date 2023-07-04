#include <bits/stdc++.h> 
int jobScheduling(vector<vector<int>> &jobs)
{priority_queue<int>q;
   unordered_map<int,vector<int>>vm;
   int maxi=0;
int ans=0;
   for(auto x:jobs){
       vm[x[0]].push_back(x[1]);
       maxi =max(maxi,x[0]);
   }
   for(int i=maxi;i>0;i--){

       for(auto x:vm[i]){
           q.push(x);
       }
   
   if(q.size()==0)
   continue;
  
  ans += q.top();

          q.pop();
          
          }


          return ans;

}
