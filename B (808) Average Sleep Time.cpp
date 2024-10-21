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

    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) { cin >> arr[i]; }

    int sum[n] = {0};
    sum[0] = arr[0];
    double weeks = n-k+1;

    for (int i = 1; i <n; ++i)
    {
        sum[i] = sum[i-1] + arr[i];
    }

    int temp = sum[k-1];

    for (int i = k; i < n; ++i)
    {
        temp += sum[i]-sum[i-k];
    }

    cout << fixed << setprecision(10) << (temp/weeks) << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}