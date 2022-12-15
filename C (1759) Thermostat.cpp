#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long l,r,x;
    cin>>l>>r>>x;
    long a,b;
    cin>>a>>b;

    if(a==b)
    {
        cout << 0 <<endl;
    }
    else if(abs(a-b)>=x)
    {
        cout << 1 <<endl;
    }
    else
    {
        if(abs(a-r)>=x)
        {
            if(abs(r-b)>=x)
            {
                cout << 2 <<endl;
                return;
            }
        }

        if(abs(a-l)>=x)
        {
            if(abs(l-b)>=x)
            {
                cout << 2 <<endl;
                return;
            }
        }

        if(abs(a-r)>=x)
        {
            if(abs(l-r)>=x)
            {
                if(abs(l-b)>=x)
                {
                    cout << 3 << endl;
                    return;
                }
            }
        }

        if(abs(a-l)>=x)
        {
            if(abs(l-r)>=x)
            {
                if(abs(r-b)>=x)
                {
                    cout << 3 << endl;
                    return;
                }
            }
        }

        cout << -1 <<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}