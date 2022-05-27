#include <bits/stdc++.h>
using namespace std;


int maxArea(vector<int>& height) {
        int n = height.size();
         int max_right=0;
        // for(int i=0 ; i<n ; i++)
        // {
        //    max_left=max(maximum,height[i])      
        // }
        for(int i=n ; i>=1 ; i--)
        {
            if(max(max_right,height[i])>=1)
            {
               max_right=i;
            }
               
        }
        int max_area;
        int area;
        for(int i=n ; i>=1 ; i--)
        {
            
           if(height[i]<height[max_right])
           {
             area=height[i]*abs(i-max_right);
           }
           else{
               area=height[max_right]*abs(i-max_right);
           }
           max_area=max(max_area,area);
        }
        return max_area;
    }

int main()
{
  int n;
  cout<<"Enter the number of elements :";
  cin >> n;
  vector<int> height(n);

  for(int i=0; i<n; i++)
    cin>>height[i];
   
   int ans=maxArea(height);
   cout<<ans<<" "<<endl;
//    for(int i=0; i<ans.size(); i++)
//    {
//        for(int j=0; j<ans[i].size(); j++)
//        {
//            cout<<ans[i][j]<<" ";
//        }
         
//          cout<<"\n";
//    }

   return 0;

}