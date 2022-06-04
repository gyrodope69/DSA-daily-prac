#include <bits/stdc++.h>
using namespace std;

// finding all prime number upto n 
void seivePrime(int n)
{
    int prime[100] = {0};
    for (int i = 2; i < n; i++)   
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j < n; j += i)  // starting from sqaure of  a number to mark all of its multiple as '1' 
            {
                prime[j] = 1;
            }
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 0)
            cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    seivePrime(n);
    return 0;
}