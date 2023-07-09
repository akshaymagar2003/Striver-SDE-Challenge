#include<bits/stdc++.h>
int NthRoot(int n, int m) {
 
  
    double p=pow((double)m,1.0/(double)n);
    int q=round(p);
    if(pow(q,n)==m){
      return q;
    }else{
      return -1;
    }
}
