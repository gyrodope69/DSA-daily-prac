#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t)
            return true;

        return false;
    }
};

int main()
{
    string s, t;
    cout << "Enter two strings: ";
    cin >> s >> t;
    Solution ob = Solution();
    bool ans = ob.isAnagram(s, t);
    if (ans == 1)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
