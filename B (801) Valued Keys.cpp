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

    string str_x, str_y;
    cin >> str_x >> str_y;
    string res = "";

    for (int i = 0; i < str_x.length(); ++i)
    {
        if (str_x[i] < str_y[i])
        {
            cout << -1 << endl;
            return;
        }

        if (str_x[i]==str_y[i])
        {
            res+=str_x[i];
        }

        if (str_x[i] > str_y[i])
        {
            res+=str_y[i];
        }
    }

    cout << res << endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}