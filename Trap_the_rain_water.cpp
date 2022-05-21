#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {
        int n = height.size();
        int leftMax=0 , rightMax=0;
        int low=0 , high=n-1;
        int ans=0;
        while(low<=high)
        {
            if(height[low]<height[high]){
            if(height[low]>leftMax)
            {
              leftMax=height[low];
            }
            else
            {
                ans+=leftMax-height[low];
            }
            low++;
          }
            else
            {
                if(height[high]>rightMax)
                {
                    rightMax=height[high];
                }
                else
                {
                    ans+=rightMax-height[high];
                }
                high--;
            }

        }
        return ans;
    }
int main()
{
    int n;
    cout<<"Enter the number of elements :";
    cin>> n;
    vector<int> v(n);
    for(int i=0; i < n; i++)
      cin >> v[i];

    cout<<"Total water which can be store is :"<<trap(v);   
    return 0;
}