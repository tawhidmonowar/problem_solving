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
    int n,temp=0;
    cin >> n;
    string str1, str2;
    cin >> str1 >> str2;

    for(i=0; i<n; i++)
    {
        if(str1[i]==str2[i] || str1[i]=='G' && str2[i]=='B' || str1[i]=='B' && str2[i]=='G')
        {
            temp++;
            continue;
        }
        else
        {
            break;
        }
    }

    if(temp==n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}


int main()
{
    //FastRead
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}