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
    int n,d,win=0,lose=0,junk=0;
    cin >> n >>d;

    for(i=0; i<d; i++)
    {
        string temp;
        cin >> temp;
        int found = temp.find('0');
        if(found==-1)
        {
            if(win>junk)
            {
                junk = win;
            }
            win = 0;
        }
        else
        {
            win++;
        }
    }

    if(win>junk)
    {
        cout << win << endl;
    }
    else
    {
        cout << junk << endl;
    }
}

int main()
{
    FastRead
    solve();

    return 0;
}
