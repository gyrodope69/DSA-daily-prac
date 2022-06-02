
#include <bits/stdc++.h>

using namespace std;


class Solution{
public:	
	int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int,int> m;  // used this map to store the remainder for particular indices
	    m.insert({0,-1});
	    int sum=0,ans=0;
	    for(int i=0 ; i<n ; i++)
	    {
	        sum+=arr[i];
	        int rem=sum%k;
	        if(rem<0)
	        {
	            rem+=k;
	        }
	        if(m.find(rem)==m.end())
	        {
	            m.insert({rem,i});
	        }
	        else
	        {
	            ans=max(ans,i-m[rem]);
	        }
	    }
	    return ans;
	}
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i;
	cin>>n>>k; int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout<<ob.longSubarrWthSumDivByK(arr, n, k)<<"\n";
	}
	return 0;	 
}