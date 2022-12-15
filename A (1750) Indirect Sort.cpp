#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n;
    cin >> n;

    long arr[n];

    for(long i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    if(arr[0]==1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}

/**



**/