bool palan(string str,int i,int j){

   while(i<j){
       if(str[i]!=str[j]){
           return false;
       }
       i++;
       j--;
   }
   return true;
}


string longestPalinSubstring(string str) {
   int length=0;
   int start=0;
   for(int i=0;i<str.size();i++){

       for(int j=i;j<str.size();j++){

           if(palan(str,i,j)){

               if(j-i+1>length){
               length=j-i+1;
               start=i;

               }
           }
       }
   }
  string ans=str.substr(start,length);

  return ans;
}
