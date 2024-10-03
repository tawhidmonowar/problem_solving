#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    unordered_map<char,int>mp;
    int k;
    cin >> k;
    for (int i = 0; i < k; ++i)
    {
        char temp;
        cin >> temp;
        mp[temp]++;
    }

    int temp = 0;
    int res = 0;

    for (int i = 0; i < n; ++i)
    {
        if (mp[str[i]])
        {
            res = max(res,temp);
            temp=1;
        }
        else
        {
            temp++;
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