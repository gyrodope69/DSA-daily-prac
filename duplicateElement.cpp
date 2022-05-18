#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int count = 0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n; j++)
        {
          if(v[i]==v[j])
            count++;
        }
    }
    if(count!=0)
      cout<<"False"<<endl;
    else
     cout<<"True"<<endl;
    return 0;
}