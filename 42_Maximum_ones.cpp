int longestSubSeg(vector<int> &arr , int n, int k){
   int i=0,j=0;
for(j=0;j<arr.size();j++){
if(arr[j]==0)
	k--;
if(k<0 && arr[i++]==0)
	k++;
	}
return j-i;
}
