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

    int n,m;
    cin >> n>>m;
    char c;
    cin >> c;
    char room[n][m];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> room[i][j];
        }
    }

    set<char>res;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if(room[i][j]==c)
            {
                if(i!=0 && room[i-1][j]!=c && room[i-1][j]!='.')
                {
                    res.insert(room[i-1][j]);
                }
                
                if(i!=n-1 && room[i+1][j]!=c && room[i+1][j]!='.')
                {
                    res.insert(room[i+1][j]);
                }
                
                if(j!=0 && room[i][j-1]!=c && room[i][j-1]!='.')
                {
                    res.insert(room[i][j-1]);
                }
                
                if(j!=m-1 && room[i][j+1]!=c && room[i][j+1]!='.')
                {
                    res.insert(room[i][j+1]);
                }
            }
        }
    }

    cout << res.size() << endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}