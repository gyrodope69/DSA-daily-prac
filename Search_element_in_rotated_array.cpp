#include <bits/stdc++.h>

using namespace std;
//     int binarySearch(vector<int> &nums,int low, int high, int target)
//     {
//         int index;
//          if(low>high){
//              return -1;
//          }

//         else
//         {
//           int mid = (low + high)/2;
//             if(target==nums[mid])
//                 index=mid;

//             else if(nums[mid]>target)
//                index=binarySearch(nums,low,mid-1,target);

//             else if(nums[mid]<target)
//                 index=binarySearch(nums,mid,high,target);
//         }
//         return index;
//     }

//     int findPivot(vector<int> &nums,int target)
//     {
//         int index,pivot;
//         int n = nums.size();
//        for(int i = 0 ; i< nums.size()-1 ; i++)
//        {
//            if(nums[i]>nums[i+1]){
//                  pivot=i;
//                  break;
//            }
//        }
//        if(target>nums[0])
//        {
//          index=binarySearch(nums,0,pivot,target);
//        }
//        else if(target<nums[0])
//        {
//            index=binarySearch(nums,pivot+1,n,target);
//        }

//         return index;
//     }
int search(vector<int> &nums, int target)
{
    int n = nums.size();
    int ans;
    // int ans = findPivot(nums,target);
    for (int i = 0; i < n; i++)
        if (nums[i] == target)
            return i;
    return -1;
}
int main()
{
    int n;
    cout << "Enter the number of elements :";
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int target;
    cout << "Enter the target element :";
    cin >> target;
    cout <<search(nums, target);
}