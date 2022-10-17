#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    cout << 2 << " ";
    for(int i=n; i>0; i--)
    {
        if(i!=2)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}