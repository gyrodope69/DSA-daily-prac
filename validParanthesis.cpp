#include<bits/stdc++.h>

using namespace std;

 bool isValid(string s) {
        int n = s.length();
        stack<char> st;
        for(int i =0 ; i<n ; i++)
        {
            // if(s[i]=='(')
            //     stack.push('(');
            // else if(s[i]=='{')
            //     stack.push('{');
            // else if(s[i]=='[')
            //     stack.push('[');
            // else if(stack.top()=='(' && s[i]==')')
            //     stack.pop();
            // else if(stack.top()=='{' && s[i]=='}')
            //     stack.pop();
            // else if(stack.top()=='[' && s[i]==']')
            //     stack.pop();
            char top = st.empty() ? '#' : st.top();
             if(top == '(' && s[i] == ')') {
                st.pop();
            }else if(top == '{' && s[i] == '}') {
                st.pop();
            }else if(top == '[' && s[i] == ']') {
                st.pop();
            }else{
                st.push(s[i]);
            }    
        }
       return st.empty();
}

int main()
{
    string s;
    cin>>s;
    cout<<isValid(s)<<endl;
    return 0;    
}