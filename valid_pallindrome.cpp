#include<bits/stdc++.h>
using namespace std;

bool isEqual(int l, int r)
    {
        if(l==r || (l>='A' && l<='Z' && r==l+32)||(r>='A'&&r<='Z' && l==r+32))
            return true;
        
        return false;
    }
    bool isPalindrome(string s) {
        int l=s.size();
        if(l==0)
            return true;
       
            vector<int> ans;
            int i=0;
            while(i<l)
            {
                if((s[i]>='A'&& s[i]<='Z')||(s[i]>='a'&& s[i]<='z')||(s[i]>='0'&& s[i]<='9'))
                     ans.push_back(s[i]);
                
                i+=1;
            }
            
            int left=0,right=ans.size();
            while(left<right)
            {
                if(isEqual(ans[left],ans[right-1])==false)
                     return false;
                
                ++left;
                --right;
            }
            return true;
            
        }

int main()
{
    string s;
    cout<<"Enter a string: ";
    cin>>s; 
    cout<<isPalindrome(s);
    return 0;
}