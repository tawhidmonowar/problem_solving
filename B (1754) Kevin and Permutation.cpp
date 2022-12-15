#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

/**

4 (4/2)
1 2 3 4
2 4 1 3 = 2
3 1 4 2 = 2

5 (5/2)
1 2 3 4 5
3 1 4 2 5 = 2

**/

void solve()
{
    long n,temp=1;
    cin >> n;

    for(long i=0; i<n; i++)
    {
        if(i%2==0)
        {
            cout << (n/2)+temp << " ";
        }
        else
        {
            cout << temp << " ";
            temp++;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}