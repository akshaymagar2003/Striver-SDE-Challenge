#include <bits/stdc++.h>
bool compair(pair<int, int> a, pair<int, int> b) {
    double r1 = (double)a.second/a.first;
    double r2 = (double)b.second/b.first;
    return r1>r2;}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    
    double profit=0.0;
    sort(items.begin(),items.end(),compair);
   for(int i=0;i<1000;i++){
       if(w-items[i].first>=0){
           w-=items[i].first;
           profit+=items[i].second;
       }
       else{
           profit+=w*(double)items[i].second/items[i].first;
           break;
       }
   }
   return profit;
}
