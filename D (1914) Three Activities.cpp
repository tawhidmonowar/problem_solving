#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    int n;
    cin >> n;
    vector<pair<int, int>> a,b,c;

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        a.push_back({temp,i});
    }

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        b.push_back({temp,i});
    }

    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        c.push_back({temp,i});
    }

    sort(a.begin(),a.end(), greater<pair<int, int>>());
    sort(b.begin(),b.end(), greater<pair<int, int>>());
    sort(c.begin(),c.end(), greater<pair<int, int>>());

    int x, y, z, res = 0, temp = 0;

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            for (int k = 0; k < 3; k++) 
            {
                if (a[i].second != b[j].second and b[j].second != c[k].second and a[i].second != c[k].second)
                {
                    temp = a[i].first + b[j].first + c[k].first;
                    res = max(res,temp);
                }
            }
        }
    }

    cout << res << endl;

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