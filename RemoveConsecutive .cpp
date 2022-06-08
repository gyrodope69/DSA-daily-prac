#include <bits/stdc++.h>
using namespace std;

string removeConsecutiveCharacter(string s)
{
    int n = s.length();
    // sort(s.begin(),s.end());
    string ans = "";
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        if (s[i] == s[j])
            ans = ans + s[i];
        else
            continue;
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    cout << removeConsecutiveCharacter(s);
    return 0;
}