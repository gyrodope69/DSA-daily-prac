/*Problem: Given an array of n integers where each value represents the number
of chocolates in a packet. Each packet can have a variable number of chocolates.
There are m students, the task is to distribute chocolate packets such that:
Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates
and packet with minimum chocolates given to the students is minimum.*/

#include <bits/stdc++.h>
using namespace std;

int minDiff(vector<int> v, int n, int m)
{
    int min;
    if (n == 0 || m == 0)
        return n;

    else if (n < m)
        return -1;

    sort(v.begin(), v.end());
    min = INT_MAX;
    int difference = 0;
    for (int i = 0; i < m - 1; i++)
    {
        difference = v[m + i - 1] - v[i];
        if (difference < min)
            min = difference;
    }
    return min;
}
int main()
{
    int n, m;
    cout << "Enter the number of packets of choacolate: ";
    cin >> n;
    cout << "Enter number of students: ";
    cin >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << "Minimum difference is :" << minDiff(v, n, m) << endl;
    return 0;
}