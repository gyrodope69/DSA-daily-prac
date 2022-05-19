// Problem: Next permutation

#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& v)
{
    int n = v.size();
    int index1,index2;
    for(int i = n-2 ; i>=0 ; i--)
    {
        if(v[i]<v[i+1]){
          index1 = i;
          break;
        }
    }
    if(index1<0)
    {
        reverse(v.begin(), v.end());
    }
    else
    {
        for(int i = n-1 ; i>index1 ; i--)
        {
            if(v[i]>v[index1]){
              swap(v[i], v[index1]);
              break;
            }
        }
    }
    reverse(v.begin()+index1+1, v.end());
}
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i < n ; i++)
    {
        cin>>v[i];
    }
    nextPermutation(v);
    cout<<"Next permutation:";
    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}