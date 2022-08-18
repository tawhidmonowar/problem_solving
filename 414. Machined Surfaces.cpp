#include <bits/stdc++.h>
#define infinity 10000
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;

int countSpace(string str)
{
    int res=0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]==' ')
        {
            res++;
        }
    }
    return res;
}

void solve()
{
    int n;
    while(cin>>n && n!=0)
    {
        cin.ignore();
        int temp=infinity,res=0;
        vector<string>vect;
        for(int i=0; i<n; i++)
        {
            string str;
            getline(cin,str);
            vect.push_back(str);
        }

        for(int i=0; i<n; i++)
        {
            if(temp>countSpace(vect[i]))
            {
                temp=countSpace(vect[i]);
            }
        }

        for(int i=0; i<n; i++)
        {
            res+=countSpace(vect[i])-temp;
        }

        cout << res << endl;
    }
}

int main()
{
    solve();
    return 0;
}