#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    int n;
    cin >> n;
    map<int, int, greater<int>> mp;
    int arr[n];

    for(int i=1; i<=n; ++i)
    {
        cin >> arr[i];
        mp[arr[i]]=i;
    }

    int res = 0;

    for (auto it = mp.begin(); it != mp.end(); ++it)
    {
        for (auto lt = it;  lt != mp.end(); ++lt)
        {
            if (__gcd(lt->first,it->first)==1)
            {
                res = max(res, (lt->second + it->second));
            }
        }
    }

    if (res)
    {
        cout << res << endl;
    }
    else
    {
        cout << -1 << endl;
    }
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