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
void solve(int test_case)
{
    int n,m,q;
    cin >> n>>m>>q;
    int m1,m2;
    cin >> m1>>m2;

    int d;
    cin >> d;

    int res=0;


    if ((m1<d && m2<d))
    {
        cout << n-max(m1,m2) << endl;
        return;
    }

    if ((m1>d && m2>d))
    {
        cout << min(m1,m2)-1 << endl;
        return;
    }

    int left = min(m1,m2);
    int right = max(m1,m2);

    cout << (right-left)/2 << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int testCase;
    cin >> testCase;
    int test_case = testCase;

    while(testCase--)
    {
        solve(test_case-testCase);
    }

    return 0;
}