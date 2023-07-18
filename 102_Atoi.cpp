#include <bits/stdc++.h> 
int atoi(string str) {
       
        int  flag=0;
        int res=0;

        if(str[0]=='-'){
           flag=1;
        }
        for(int i=0;i<str.size();i++){
          if ( str[i]>='0' && str[i] <= '9') {
            res = res * 10 + (str[i] - '0');
          }
        }
        // if(res==0 && flag==1){
        //     return -1;
        // }


        if(flag==1){
            return res*(-1);
        }
        else{
            return res;
        }
        

       


}
