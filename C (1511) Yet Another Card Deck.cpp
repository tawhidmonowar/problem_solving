#include <bits/stdc++.h>
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
    deque<int>deq;

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        deq.push_back(temp);
    }

    for (int i = 0; i < q; ++i)
    {
        int temp;
        cin >> temp;
        auto first = deq.begin();
        auto last = deq.end();
        auto found = find(first, last, temp);
        cout << found - deq.begin()+1 << " ";
        deq.erase(found);
        deq.push_front(temp);
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