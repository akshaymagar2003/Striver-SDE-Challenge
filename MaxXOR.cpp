
vector<int> maxXorQueries(vector<int> &arr, vector<vector<int>> &queries){
     vector<int>ans;
     for(int i=0;i<queries.size();i++){

        int limit= queries[i][1];
		int temp=queries[i][0];
		int res=-1;
		int maxi=-100;   
      for(int i=0;i<arr.size();i++){
           if(arr[i]<=limit){
                     res=temp^arr[i];

		   }
        maxi =max(maxi,res);

	  }
        ans.push_back(maxi);

	 }

	 return ans;

}
