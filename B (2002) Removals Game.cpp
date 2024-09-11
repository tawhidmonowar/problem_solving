#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    int n;
    cin >> n;
    vector<int>a;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }

    vector<int>b,rb;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        b.push_back(temp);
    }

    rb = b;
    reverse(b.begin(),b.end());

    if (a==b || a==rb)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Alice" << endl;
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