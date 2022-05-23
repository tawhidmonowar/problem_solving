#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        long long n,mn,mx;
        cin>>n;

        mx=n/4;
        mn=n/6;

        if(n%2 || n<4)
        {
            cout << -1 <<endl;
            continue;
        }

        if(n<=8)
        {
            cout << n/4 << ' ' << n/4 <<endl;
            continue;
        }

        if(n%6)
        {
            mn++;
        }

        cout<<mn<<' '<<mx<<endl;
    }

    return 0;
}
