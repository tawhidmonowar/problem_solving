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
    int x,y,z,n,a,b,c;
    bool stop,yes,on;
    int temp=0,total=0,zero=0;

    cin >> n;
    cin >> str;

    for(i=0; i<n; i++)
    {
        if(str[i]=='B'&&zero==0)
        {
            total++;
            zero=1;
        }

        if(str[i]=='W')
        {
            zero=0;
        }

    }

    cout << total << endl;

    for(i=0; i<n; i++)
    {
        if(str[i]=='W')
        {
            if(temp>0)
            {
                cout << temp << " ";
                temp = 0;
            }
        }
        else
        {
            temp++;
        }
    }

    if(temp>0)
    {
        cout << temp;
    }

}

int main()
{
    FastRead
    solve();

    return 0;
}
