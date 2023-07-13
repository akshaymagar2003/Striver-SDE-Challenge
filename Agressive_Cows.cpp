#include <bits/stdc++.h>

bool check(int mid, vector<int> positions, int n, int c) {
   int count=1;
    int start=positions[0];
  for (int i = 1; i < n; i++) {
    if (positions[i ] - start >= mid) {
        
	  count++;
	  start=positions[i];
	}
        if (count == c) {
        return true;
		}
  }
  return false;

}

int chessTournament(vector<int> positions , int n ,  int c){
sort(positions.begin(),positions.end());
int low =-1;
int high=positions[n-1]-positions[0];
int ans=1;
while(low<=high){

     int mid =(low+high)/2;
	 if(check(mid,positions,n,c)){
           ans=mid;
		   low=mid+1;
         } else {
         
		 high=mid-1;

		 }
}
return ans;




}
