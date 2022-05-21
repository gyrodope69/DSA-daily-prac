// Problem : Kth Largest Element in an Array

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cout<<"Enter the number of elements :";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n; i++)
      {
          int x;
          cin>>x;
          v.push_back(x);

      }
    cout<<"Enter the value for k:";  // we need to find kth largest element
    cin>>k;
    sort(v.begin(), v.end());
    cout<<v[v.size()-k]<<endl;

}