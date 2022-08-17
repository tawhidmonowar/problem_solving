#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
#define endl "\n"
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;

void solve()
{
    ll i,n,k,temp;
    cin >>n>>k;
    vector<pair<ll,ll>>vect;

    if(k==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(i=1; i<=n; i+=2)
        {
            if((i+k)*(i+1)%4==0)
            {
                vect.push_back(make_pair(i,i+1));
            }
            else if((i+1+k)*(i)%4==0)
            {
                vect.push_back(make_pair(i+1,i));
            }
        }
        
        if(vect.size()!=(n/2))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout << "YES" << endl;
            for(i=0; i<vect.size(); i++)
            {
                cout << vect[i].first << " " << vect[i].second <<endl;
            }
        }
    }
}

int main()

{
    FastRead
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}
