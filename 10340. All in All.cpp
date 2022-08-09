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
int i,j,k,arr[MAX];
int x,y,z,n,a,b,c;
bool stop,yes,on;

void solve()
{
    string str,str2,str3;

    while(cin>>str && cin >> str2)
    {
        for(i=0,j=0; i<str2.length(); i++)
        {
            if(str2[i]==str[j])
            {
                j++;
            }
        }

        if(j==str.length())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}

int main()
{
    FastRead
    solve();

    return 0;
}
