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

    for(int i=0; i<n-1; i++)
    {
        if(arr[i]==arr[i+1])
        {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main()
{
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        solve();
    }
    return 0;
}
