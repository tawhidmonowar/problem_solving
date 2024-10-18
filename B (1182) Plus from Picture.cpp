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

    int height, width;
    cin >> height >> width;
    char picture[height][width];
    int total_str = 0, cunt = 0;

    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            cin >> picture[i][j];
            if (picture[i][j]=='*')
            {
                total_str++;
            }
        }
    }

    for (int i = 1; i < height-1; ++i)
    {
        for (int j = 1; j < width-1; ++j)
        {
            if (picture[i][j]=='*' and picture[i-1][j]=='*' and picture[i+1][j]=='*')
            {
                if (picture[i][j-1]=='*' and picture[i][j+1]=='*')
                {
                    for(int x=i; x<height && picture[x][j] =='*'; x++)
                    {
                        cunt++;
                    }
                    for(int x=i; x>=0 && picture[x][j] =='*' ;x--)
                    {
                        cunt++;
                    }
                    for(int x=j; x<width && picture[i][x] =='*'; x++)
                    {
                        cunt++;
                    }
                    for(int x=j; x>=0 && picture[i][x] =='*'; x--)
                    {
                        cunt++;
                    }
                }
            }
        }
    }

    if (total_str==cunt-3)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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