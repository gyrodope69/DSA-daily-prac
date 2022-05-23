#include <bits/stdc++.h>
using namespace std;

void helper(vector<int> &v ,vector<int> &subsets, vector<vector<int>> &ans, int i)
{
    if(i==v.size())
    {
       ans.push_back(subsets);
        return;
    }
    subsets.push_back(v[i]);
    helper(v,subsets,ans,i+1);
    
    subsets.pop_back();
    helper(v,subsets,ans,i+1);
    
}
vector<vector<int>> pwset(vector<int>v)
{
    vector<vector<int>> ans;
    vector<int> subsets;
    helper(v,subsets,ans,0);
    return ans;
    
}

int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>> n;
    vector<int> v(n);
    for(int i=0; i<n ; i++)
      cin>>v[i];
    // pwset(v);
       vector<vector<int> > ans = pwset(v);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}