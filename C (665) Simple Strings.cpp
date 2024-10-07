#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    string str;
    cin >> str;

    for (int i = 1; i < str.length(); ++i)
    {
        if (str[i-1]==str[i])
        {
            str[i] = ++str[i];

            if (str[i]==str[i+1])
            {
                str[i] = ++str[i]; 
            }
        }
    }

    for (int i = 1; i < str.length(); ++i)
    {
        if (str[i]>'z')
        {
            str[i]='a';    

            if (str[i]==str[i+1])
            {
                str[i] = ++str[i]; 
            }
            
        }
    }

    cout << str << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}