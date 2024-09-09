#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long  n,k;
    cin >> n >> k;
    long arr[n];
    for(long i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    if(k>n)
    {
        cout << -1 << endl;
    }
    else
    {
        reverse(arr,arr+n);
        cout << arr[k-1] << " " << arr[k-1] << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
