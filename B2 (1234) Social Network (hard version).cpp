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

    int n,k;
    cin >> n >> k;
    vector<int> vect;

    deque<int> deq;
    map<int, int> mp;

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        vect.push_back(temp);
    }

    for (int i = 0; i < n; ++i)
    {
        if (!mp[vect[i]])
        {
            deq.push_front(vect[i]);
            mp[vect[i]]=1;
        }

        if (deq.size()>k)
        {
            mp[deq.back()]=0;
            deq.pop_back();
        }
    }

    cout << deq.size() << endl;

    for(auto x: deq)
    {
        cout << x << " ";
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