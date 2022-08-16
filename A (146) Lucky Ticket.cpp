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
    int n;
    cin >> n;
    string str;
    cin >> str;
    int x=0,y=0,res=0,temp=n/2;

    for(int i=0; i<n; i++)
    {
        if(str[i]=='7' || str[i]=='4')
        {
            continue;
        }
        else
        {
            res=-1;
            break;
        }
    }


    if(res==-1)
    {
        cout << "NO" << endl;
    }
    else
    {
        for(i=0; i<temp; i++)
        {
            x+=(int)str[i];
        }

        for(; i<n; i++)
        {
            y+=(int)str[i];
        }

        if(x==y)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()

{
    FastRead
    solve();

    return 0;
}
