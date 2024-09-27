#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

        int n, q;
    cin >> n >> q;

    vector<int>vect;

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        vect.push_back(temp);
    }

    vector<int>non_increasing(n),non_decreasing(n);
    iota(non_increasing.begin(), non_increasing.end(),0);
    iota(non_decreasing.begin(), non_decreasing.end(),0);

    for (int i = 1; i < n; ++i)
    {
        if (vect[i-1]>=vect[i])
        {
            non_increasing[i]=non_increasing[i-1];
        }
    }

    for (int i = n - 2; i >= 0; --i)
    {
        if (vect[i] <= vect[i + 1])
        {
            non_decreasing[i] = non_decreasing[i + 1];
        }
    }

    while(q--) 
    {
        int l,r;
        cin >> l >> r;
        if (non_increasing[r-1]<=non_decreasing[l-1])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}