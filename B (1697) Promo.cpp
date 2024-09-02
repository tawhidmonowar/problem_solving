#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n, q;
    cin >> n >> q;
    vector<long> p(n);

    for(long i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    sort(p.begin(), p.end(), greater<int>());


    vector<long> prefix(n+1, 0);

    for(long i = 1; i <= n; i++)
    {
        prefix[i] = prefix[i-1] + p[i-1];
    }

    for(long i = 0; i < q; i++)
    {
        long x, y;
        cin >> x >> y;

        long result = prefix[x] - prefix[x-y];
        cout << result << endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
