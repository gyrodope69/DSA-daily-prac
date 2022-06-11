#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        for(int i=0 ; i<strs[0].length(); i++)
        {
            for(int j=1 ; j<strs.size() ; j++)
            {
                 if(i>=strs[j].size() || strs[0][i]!=strs[j][i])
                     return strs[0].substr(0,i);
            }
        }
        return strs[0];
    }
};

int main()
{
    int n;
    cin>>n; 
    vector<string> strs(n);
    for(int i=0; i < n; i++)
    {
       cin>>strs[i];
    } 
    Solution ob;
    cout<<ob.longestCommonPrefix(strs);
    return 0;
}