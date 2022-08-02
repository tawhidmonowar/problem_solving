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

void solve()
{
    int i,j,x,y,z,n,m,a,b,c;
    bool stop,yes,on;
    int temp=0,total=0,sum=0;

    vector<pair<string, string>> vect;

    cin >> n>> m;

    for(i=0; i<m; i++)
    {
        string tempX, tempY;
        cin >> tempX >> tempY;
        vect.push_back(make_pair(tempX,tempY));
    }

    vector<string>vectString;

    for(i=0; i<n; i++)
    {
        string tempS;
        cin >> tempS;
        vectString.push_back(tempS);
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(vectString[i]==vect[j].first)
            {
                string tf = vect[j].first;
                string ts = vect[j].second;

                if(tf.length()<=ts.length())
                {
                    cout << vect[j].first << " ";
                    break;
                }
                else
                {
                    cout << vect[j].second <<" ";
                    break;
                }
            }
        }
    }

}

int main()
{
    FastRead
    solve();

    return 0;
}
