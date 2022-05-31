#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
    
public:
     static bool check(string &a, string &b)
	{
	    string ab=a+b;
	    string ba=b+a;
	    return (a+b)>=(b+a);
	   // return ab.compare(ba)>0?1:0;
	}
	
	string printLargest(vector<string> &arr) {
	    int count=0;
	   
	    for(int i=0 ; i<arr.size() ; i++)
	       {
	           if(arr[i]=="0")
	           {
	               count++;
	           }
	       }
	      if(count==arr.size())
	        {
	         return"0";
	        }
	   sort(arr.begin(),arr.end(),check);
	    string ans="";
        for(int i=0; i<arr.size(); i++)
        {
            ans+=arr[i];
        }
            
          return ans; 
          
	    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<string> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printLargest(arr);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends