#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
int temp=0,total=0,sum=0;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;

void solve()
{
    int x,y;
    while(cin>>x&&x!=0&&cin>>y&&y!=0)
    {
        int i=0,j=0,k=0,heads[x],knights[y];

        for(i=0; i<x; i++)
        {
            cin >> heads[i];
        }

        for(i=0; i<y; i++)
        {
            cin >> knights[i];
        }

        sort(heads,heads+x);
        sort(knights,knights+y);
        int dragons=x,temp=0;

        for(i=0; i<y; i++)
        {
            if(knights[i]>=heads[j])
            {
                dragons--;
                temp+=knights[i];
                j++;
            }
        }

        if(dragons==0)
        {
            cout << temp << endl;
        }
        else
        {
            cout << "Loowater is doomed!" << endl;
        }
    }
}

int main()
{
    FastRead
    solve();

    return 0;
}
