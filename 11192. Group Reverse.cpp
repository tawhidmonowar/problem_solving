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
int i,j=0,k,arr[MAX];

void solve()
{
    int n;
    while(cin>>n && n!=0)
    {
        string str,str2,str3;
        int x;
        cin>>str;
        x=str.length()/n;

        for(i=1; i<=str.length(); i++)
        {
            if(i%x==0)
            {
                str2+=str[i-1];
                reverse(str2.begin(),str2.end());
                cout << str2;
                str2="";
            }
            else
            {
                str2+=str[i-1];
            }
        }
        
        cout << endl;
    }
}

int main()
{
    FastRead
    solve();

    return 0;
}
