#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;
#define debug(...) _f (#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void _f (const char* name, Arg1&& arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void _f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | ";
    _f (comma + 1, args...);
}

void solve()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    long n,m;
    cin >> n >> m;
    vector<string>vect;

    for (int i = 0; i < n; ++i)
    {
        string temp;
        cin >> temp;
        vect.push_back(temp);
    }

    int left=100,top=-1,right=-1,bottom=-1;

    for (int i = 0; i < n; ++i)
    {
        string temp = vect[i];
        for (int j = 0; j < m; ++j)
        {
            if (temp[j]=='*')
            {
                top=i;
                goto foundTop;
            }
        }
    }

    foundTop:
    
    for (int i = n-1; i >=0; --i)
    {
        string temp = vect[i];

        for (int j = 0; j < m; ++j)
        {
            if (temp[j]=='*')
            {
                bottom=i;
                goto bottomTop;
            }
        }
    }

    bottomTop:


    for (int i = 0; i < n; ++i)
    {
        string temp = vect[i];
        for (int j = 0; j < m; ++j)
        {
            if (temp[j]=='*')
            {
                if (left>j)
                {
                    left=j;
                }
            }
        }
    }


    for (int i = 0; i < n; ++i)
    {
        string temp = vect[i];
        for (int j = m-1; j >= 0; --j)
        {
            if (temp[j]=='*')
            {
                if (right<j)
                {
                    right=j;
                }
            }
        }
    }

 //   debug(top,bottom,left,right);

    for (int i = 0; i < n; ++i)
    {
        string temp = vect[i];
        for (int j = 0; j < m; ++j)
        {
            if (i>=top && i<=bottom)
            {
                if (j>=left && j<=right)
                {
                    cout << temp[j];
                }
            }
        }

        if (i>=top && i<=bottom)
        {
            cout  << endl;
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