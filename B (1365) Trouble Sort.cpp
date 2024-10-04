#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) { cin >> arr[i]; }
    int arr2[n];
    for (int i = 0; i < n; i++) { cin >> arr2[i]; }

    bool is_sorted = true;
    for (int i = 1; i < n; ++i)
    {
        if (arr[i]>=arr[i-1])
        {
            continue;
        }
        else
        {
            is_sorted = false;
            break;
        }
    }

    int one=0, zero=0;
    for (int i = 0; i < n; ++i)
    {
        if (arr2[i]==1)
        {
            one=1;
        }
        else if (arr2[i]==0)
        {
            zero=1;
        }
    }

    if (is_sorted)
    {
        cout << "YES" << endl;
    }
    else if (one and zero)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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