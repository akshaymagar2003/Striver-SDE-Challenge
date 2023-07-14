bool compair(pair<int,int>a,pair<int,int>b){
    return a.second>b.second;
}
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{  vector<int>v;
    unordered_map<int,int>um;
    vector<pair<int,int>>b;

    for(int i=0;i<n;i++ ){
        um[arr[i]]++;
    }
     
    for(auto x:um){
       b.push_back({x.first,x.second}); 
    }
    sort(b.begin(),b.end(),compair);
    
    for(auto x:b){
        if(k>0){
            v.push_back(x.first);
            k--;
        }
        else{break;}
    }
    return v;
}
