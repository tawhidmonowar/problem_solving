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

int main()
{
    FastRead
    int i,testCase;
    cin >> testCase;

    for(i=0; i<testCase; i++)
    {
        int j,n,p,q,weight=0,pic=0;
        cin >>n>>p>>q;
        int eggs[n];

        for(j=0; j<n; j++)
        {
            cin >> eggs[j];
        }

        sort(eggs,eggs+n);

        for(j=0; j<n; j++)
        {
            if(pic<p && weight+eggs[j]<=q)
            {
                weight+=eggs[j];
                pic++;
            }
        }

        cout <<"Case "<<i+1<<": " <<pic<<endl;
    }

    return 0;
}
