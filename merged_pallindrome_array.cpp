#include <bits/stdc++.h>
using namespace std;

int min_operations(vector<int> &v)
{
   int n= v.size(),ans=0;
   for(int i=0,j=n-1 ; i<=j ;)
   {
       if(v[i]==v[j])
       {
           i++;
           j--;
       }
       else if(v[i]>v[j])
       {
           j--;
           v[j]+=v[j+1];
           ans++;
           
       }
       else
       {
         i++;
         v[i]+=v[i-1];
         ans++;
       }

   }
   return ans;
}
int main()
{
    int n;
    cin>> n;
    vector<int> v(n);
    for(int i=0; i < n; i++)
      cin>> v[i];
    cout<<"Minimum operations are:"<<min_operations(v)<<endl;

    return 0;

}