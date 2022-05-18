#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int start = 0;
    int end = n - 1;
    int temp;
    while (start < end)
    {
        temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
    cout << "Reversed array is: ";

    for (int i = 0; i < n; i++)
        cout << v[i] << " ";

    return 0;
}