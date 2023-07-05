#include<bits/stdc++.h>
 bool compair(pair<int,int>&a,pair<int,int>&b){
         return a.second < b.second;
 }
int maximumActivities(vector<int> &start, vector<int> &finish) {
   vector<pair<int,int>>p;
   for(int i=0;i<start.size();i++){
       p.push_back(make_pair(start[i],finish[i]));
   }
   int count=1;
   sort(p.begin(),p.end(),compair);
   int f=p[0].second;
   for(int i=0;i<start.size()-1;i++){
       if(f<=p[i+1].first){
           count++;
           f=p[i+1].second;
       }
   }
   return count;
}
