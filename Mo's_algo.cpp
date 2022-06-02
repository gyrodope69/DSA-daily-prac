#include <bits/stdc++.h>
using namespace std;
#define int long long
int rootN;
const int N = 1e5 + 2;

struct Q
{
    int l, r, index;
};

Q q[N];

bool compare(Q q1, Q q2)
{
    if(q1.l/rootN == q2.l/rootN)
    {
        return q1.r/rootN > q2.r/rootN;
    }
    return q1.l/rootN < q2.l/rootN;
}

signed main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    rootN = sqrtl(n);

    int queries;
    cin >> queries;
    for (int i = 0; i < queries; i++)
    {
        int l, r;
        cin >> l >> r;
        q[i].l=l;
        q[i].r=r;
        q[i].index=i;
    }

    sort(q,q+queries,compare);
    vector<int> ans(queries);
    int curr_l=0,curr_r=-1,l,r,curr_ans=0;
    
    for(int i=0;i<queries ; i++)
    {
        l=q[i].l; r=q[i].r;
        l--; r--;

        while(curr_r<r)
        {
            curr_r++;
            curr_ans+=v[curr_r];
        }
        while(curr_l>l)
        {
            curr_l--; 
            curr_ans+=v[curr_l];
        }
        while(curr_l<l)
        {
            curr_ans-=v[curr_l];
            curr_l++;
        }
        while(curr_r>r)
        {
            curr_ans-=v[curr_r];
            curr_r--;
        }

        ans[q[i].index]=curr_ans;
    }

    for(int i=0; i<queries ; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;

}