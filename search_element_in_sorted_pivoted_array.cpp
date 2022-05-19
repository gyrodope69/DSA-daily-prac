// Problem: Search an element in a sorted and rotated array

#include <bits/stdc++.h>

using namespace std;

// Function for binary search
int binary_search(vector<int> v, int start, int end, int key)
{
    int mid;
    if (start < end)
    {
        if (start == end)
            return start;

        int mid = (start + end) / 2;
        if (v[mid] == key)
            return mid;

        else if (key < v[mid])
            return binary_search(v, 0, mid, key);

        return binary_search(v, mid + 1, end, key);
    }
}

// Function for finding pivot indices
int findpivot(vector<int> v, int start, int end)
{
    if (start == end)
        return start;

    int mid = (start + end) / 2;
    if (mid < end && v[mid] > v[mid + 1])
        return mid;

    if (mid > start && v[mid] < v[mid - 1])
        return mid - 1;

    if (v[start] >= v[mid])
        return findpivot(v, start, mid);

    return findpivot(v, mid + 1, end);
}

// Function for pivoted search of element
int pivotBinarySearch(vector<int> &v, int n, int key)
{
    int pivot = findpivot(v, 0, n);

    if (v[pivot] == key)
        return pivot;
    if (v[0] <= key)
        return binary_search(v, 0, pivot, key);

    return binary_search(v, pivot + 1, n, key);
}
int main()
{
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter elements of the array: ";
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    cout << "Enter key to search: ";
    cin >> key;
    cout << "Found index:" << pivotBinarySearch(v, n - 1, key);

    return 0;
}