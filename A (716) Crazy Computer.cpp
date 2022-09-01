#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,x=1;
    cin >>n>>m;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++)
    {
        if(arr[i+1]-arr[i]<=m)
        {
            x++;
        }
        else
        {
            x=1;
        }
    }

    cout << x << endl;

}

int main()
{
    solve();
    return 0;
}
