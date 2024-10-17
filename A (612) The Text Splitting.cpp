#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void print(string str, int n, int x, int s)
{
    for (int i = s; i < n; ++i)
    {
        if ((i+1)%x==0)
        {
            cout << str[i] << endl;
        }
        else
        {
            cout << str[i];
        }
    }

}

void solve()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,p,q;
    cin >> n >> p >> q;
    string str;
    cin >> str;

    if (n%p==0)
    {
        cout << n/p << endl;
        print(str,n,p,0);
    }
    else if(n%q==0)
    {
        cout << n/q << endl;
        print(str,n,q,0);
    }
    else if (n%(p+q)==0)
    {
        cout << 2 << endl;
        for (int i = 0; i < p; ++i)
        {
            cout << str[i];
        }

        cout << endl;

        for (int i = p; i < p+q; ++i)
        {
            cout << str[i];
        }
    }
    else
    {
        int temp = 0, nn = n, xx = 0;
        while(true)
        {
            temp++;
            n-=p;

            if (n%q==0 and n>=q)
            {
                cout << temp + (n/q) << endl;
                print(str, temp*p, p, 0);
                
                for (int i = temp*p; i < nn; ++i)
                {
                    xx++;
                    if (xx==q)
                    {
                        xx=0;
                        cout << str[i] << endl;
                    }
                    else
                    {
                        cout << str[i];
                    }

                }
                
                break;
            }

            if (n<0)
            {
                cout << -1 << endl;
                break;
            }
        }

    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}