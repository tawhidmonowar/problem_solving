#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

#define debug(...) _f (#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void _f (const char* name, Arg1&& arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void _f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | ";
    _f (comma + 1, args...);
}

void solve()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;
    vector<int>vect;

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        vect.push_back(temp);
    }

    for(int i=1, j=n; i<=n; i++,j--)
    {
        if (i>j)
        {
            break;
        }
        if (i%2!=0)
        {
            //debug(i,j);
            swap(vect[i-1],vect[j-1]);
        }
    }

    for(auto x:vect)
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