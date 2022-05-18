// Problem: We need to find maximum sum of given sub array

// solution: We used kadane's algorithm with complexity of O(n)
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "\n Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum = 0;
    int max = v[0];
    for (auto i : v)
    {
        if (sum < 0)
            sum = 0;
        else
            sum += i;

        if (sum > max)
            max = sum;

        else
            continue;
    }
    cout << "The maximum sum of sub array is : " << max;
    return 0;
}