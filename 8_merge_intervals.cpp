#include <bits/stdc++.h> 
using namespace std;
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{    vector<vector<int>>ans;
    sort(intervals.begin(),intervals.end());
    ans.push_back(intervals[0]);
    int id=0;
    for (int i = 1; i < intervals.size(); i++) {
      if (ans[id][1] >= intervals[i][0]) {
      ans[id][1]=max(ans[id][1],intervals[i][1]);

      } else {
      ans.push_back(intervals[i]);
      id++;
      }
    }
    return ans;
}
