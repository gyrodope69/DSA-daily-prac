#include<bits/stdc++.h>
using namespace std;

class Solution
{
   public:
    string longestPallindrome(string s)
   {
      int n = s.size();
      string ans;
      int ansLen = 0;
      vector<vector<int>> dp (n,vector<int>(n,0));
      for(int diff = 0 ; diff<n; diff++)
      {
        for(int i = 0 , j=i+diff ; j<n ; i++,j++)
        {
            if(i==j)
            {
                dp[i][j]=1;
            }
            else if(diff == 1)
            {
                dp[i][j] = s[i]==s[j]?2:0;
            }
            else
            {
                if(s[i]==s[j] && dp[i+1][j-1]>0)
                {
                    dp[i][j] = dp[i+1][j-1]+2;
                } 
            }

            if(dp[i][j]!=0)
            {
               if(j-i+1>ansLen)
               {
                ansLen = j-i+1;
                ans = s.substr(i,ansLen);
               }
            }
        }
      }
       return ans;
   }
};

int main()
{
    Solution ob;
    string s;
    cin>>s;
    cout<<ob.longestPallindrome(s)<<endl;

   return 0;
}