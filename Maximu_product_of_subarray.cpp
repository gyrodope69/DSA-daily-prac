#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int ans = nums[0];
        int max_num=ans;
        int min_num=ans;
        
        for(int i = 1 ; i<n ; i++)
        {
            if(nums[i]<0)
                swap(max_num,min_num);
            
            max_num=max(nums[i],max_num*nums[i]);
            min_num=min(nums[i],min_num*nums[i]);
            ans=max(ans,max_num);
        }
        return ans;
    }

int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++)
    cin>>nums[i];
    
    cout<<"Maximum product of a subarray  is :"<<maxProduct(nums);
    return 0;
}