#include<bits/stdc++.h>

using namespace std;
  vector<vector<int>> res;
  void findbandc(vector<int> nums, int i,int j,int target)
    {
        int a1=nums[i-1];
        
        while(i<j)
        {
           if(nums[i]+nums[j]<target)
               i++;
            else if(nums[i]+nums[j]>target)
                j--;
            else
            {
                vector<int>list;
                list.push_back(a1);
                list.push_back(nums[i]);
                list.push_back(nums[j]);
                
                res.push_back(list);
                // for b duplicate
                while(i<j && nums[i]==nums[i+1])i++;
                //for duplicate c
                while(i<j && nums[j]==nums[j-1])j--;
                i++;
                j--;
            }
        }
        
    }
    vector<vector<int>> threeSum(vector<int>& nums) {
     int n=nums.size();
     sort(nums.begin(),nums.end());
        for(int i=0 ; i<n ; i++)
        {
            if(i==0 || nums[i-1]!=nums[i])
              findbandc(nums,i+1,n-1,-nums[i]);
        }
        return res;
    }
    
  

int main()
{
  int n;
  cout<<"Enter the number of elements :";
  cin >> n;
  vector<int> nums(n);

  for(int i=0; i<n; i++)
    cin>>nums[i];
   
   vector<vector<int> > ans=threeSum(nums);
   for(int i=0; i<ans.size(); i++)
   {
       for(int j=0; j<ans[i].size(); j++)
       {
           cout<<ans[i][j]<<" ";
       }
         
         cout<<"\n";
   }

   return 0;

}