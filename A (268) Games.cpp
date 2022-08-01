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
int i,j,k,arr[MAX];

void solve()
{
    string str,str2,str3;
    bool stop,yes,on;
    int temp=0,total=0,sum=0,n;
    vector<pair<int,int>>vect;
    cin >> n;

    for(i=0; i<n; i++)
    {
        int a,b;
        cin >>a>>b;
        vect.push_back(make_pair(a,b));
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i!=j && vect[i].first==vect[j].second)
            {
                total++;
            }
        }
    }

    cout << total << endl;
}

int main()
{
    FastRead
    solve();

    return 0;
}
