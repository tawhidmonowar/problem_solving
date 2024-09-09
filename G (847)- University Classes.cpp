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

    int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        string str;
        cin >> str;
        for(int j=1; j<=7; j++)
        {
            if(str[j-1]=='1')
            {
                mp[j]++;
            }
            else
            {
                mp[j]=mp[j];
            }
        }
    }

    int result=0;
    for(auto x:mp)
    {
        result=max(result,x.second);
    }

    cout << result << endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}