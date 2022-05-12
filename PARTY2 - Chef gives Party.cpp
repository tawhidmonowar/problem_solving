#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int n,x,k;
        cin >>n>>x>>k;

        if(x*n>k)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }

    }

    return 0;
}
