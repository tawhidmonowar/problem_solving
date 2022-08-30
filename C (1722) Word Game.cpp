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
    int n,pl1=0,pl2=0,pl3=0;
    cin >> n;
    vector<string>pl1Vect,pl2Vect,pl3Vect;
    map<string,int>mp;

    for(int i=0; i<n; i++)
    {
        string temp;
        cin >> temp;
        pl1Vect.push_back(temp);
        mp[temp]++;
    }

    for(int i=0; i<n; i++)
    {
        string temp;
        cin >> temp;
        pl2Vect.push_back(temp);
        mp[temp]++;
    }

    for(int i=0; i<n; i++)
    {
        string temp;
        cin >> temp;
        pl3Vect.push_back(temp);
        mp[temp]++;
    }


    for(int i=0; i<n; i++)
    {
        if(mp[pl1Vect[i]]==1)
        {
            pl1+=3;
        }
        else if(mp[pl1Vect[i]]==2)
        {
            pl1++;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(mp[pl2Vect[i]]==1)
        {
            pl2+=3;
        }
        else if(mp[pl2Vect[i]]==2)
        {
            pl2++;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(mp[pl3Vect[i]]==1)
        {
            pl3+=3;
        }
        else if(mp[pl3Vect[i]]==2)
        {
            pl3++;
        }
    }

    cout << pl1 << " " << pl2 << " " << pl3 << endl;

}

int main()
{
    FastRead
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}