#include <bits/stdc++.h>
using namespace std;

// Solved the question without taking extra space 

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
     
        vector<int> ans(n);
        ans[0]=1;
        for(int i = 1 ; i<n ; i++)
        {
            ans[i]=nums[i-1]*ans[i-1];
        }
        
        int right=1;
        for(int i=n-1; i>=0 ; i--)
        {
          ans[i]=ans[i]*right;
          right*=nums[i];
        }
        
        return ans;
    }
int main()
{
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
     cin>>nums[i];
    
    vector<int> ans = productExceptSelf(nums);
    cout<<"Array is : ";
    for(auto i:ans) 
      {
          cout<<i<<" ";
      }
    return 0;

}