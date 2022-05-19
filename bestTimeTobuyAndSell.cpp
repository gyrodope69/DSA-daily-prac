// problem : Perfect time to buy and sell 

#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int>& prices) {
        int n = prices.size(),profit=0;
        int maxprofit=0;
        int minprice=INT_MAX;
        for(int i = 0 ; i<n;i++)
        {
           minprice=min(minprice,prices[i]);
           maxprofit=max(maxprofit,prices[i]-minprice);
        }
        return maxprofit;
    }
int main()
{
    int n;
    cout<<"Enter the number of elements :";
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
      cin>>v[i];
    
    cout<<"Maximum profit is :"<<maxProfit(v);
}