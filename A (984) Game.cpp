#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+n);
    int mid = n/2;

    if(n%2==0)
    {
        cout << arr[mid-1];
    }
    else
    {
        cout << arr[mid];
    }
}

int main()
{
    solve();
    return 0;
}
