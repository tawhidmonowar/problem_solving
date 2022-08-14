#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;

void solve()
{
    map<string,int>mp;
    int i,n;
    cin >> n;
    for(i=0; i<n; i++)
    {
        string temp;
        cin >> temp;

        if(mp.find(temp)==mp.end())
        {
            cout << "OK" << endl;
            mp.insert(make_pair(temp, 1));
        }
        else
        {
            mp[temp]++;
            cout << temp << mp[temp]-1 << endl;
        }
    }
}

int main()
{
    FastRead
    solve();

    return 0;
}
