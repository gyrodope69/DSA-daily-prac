// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>> interval) {
        sort(interval.begin(),interval.end());
        vector<vector<int>> merged;
        // int index;
         for(int i=0 ; i<interval.size() ; i++)
         {
             vector<int> v;
             if(merged.empty() || merged.back()[1]<interval[i][0])
             {
                //  end=max(merged[i][1],interval[i][1]);
                 v={
                     interval[i][0],interval[i][1]
                   };
                   merged.push_back(v);
             }
             else
             {
                //  index=index+1;
                merged.back()[1]=max(interval[i][1],merged.back()[1]);
             }
         }
         return  merged;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
} 