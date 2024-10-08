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

    int n;
    cin >> n;

    int entering[n];
    for (int i = 0; i < n; i++) { cin >> entering[i]; }

    int exiting[n];
    for (int i = 0; i < n; i++) { cin >> exiting[i]; }

    unordered_map <int, int> car_in_out;
    for (int i = 0; i < n; ++i)
    {
        car_in_out[exiting[i]]=i;
    }

    int start = -1;
    int fined_cars = 0;
    for (int i = 0; i < n; ++i)
    {
        if (car_in_out[entering[i]]>start)
        {
            start = car_in_out[entering[i]];
        }
        else
        {
            fined_cars++;
        }
    }

    cout << fined_cars << endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}