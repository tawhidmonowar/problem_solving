#include <bits/stdc++.h>
#define int long long int
using namespace std;

void solve()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;
    int arr[n+1]={0};
    
    for (int i = 1; i <=n; i++)
    {
        cin >> arr[i];
    }
    
    int d = INT_MIN;
    int temp = INT_MAX;

    if(n==3)
    {
        cout<<arr[3]-arr[1];
        return;
    }

    for(int i=1; i<n; i++)
    {
        d=max(d,arr[i+1]-arr[i]);

        if(i+2<=n)
        {
            temp=min(temp,arr[i+2]-arr[i]);
        }
    }

    d = max(d,temp);

    cout << d << endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}