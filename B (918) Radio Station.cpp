#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;
int i,j,k,arr[MAX];

void solve()
{
    int a,b;
    cin >> a >> b;

    vector<pair<string,string>>vec1,vec2;

    for(i=0; i<a; i++)
    {
        string x,y;
        cin >>x>>y;
        y.push_back(';');
        vec1.push_back(make_pair(x,y));
    }

    for(i=0; i<b; i++)
    {
        string x,y;
        cin >>x>>y;
        vec2.push_back(make_pair(x,y));
    }


    for(i=0; i<b; i++)
    {
        for(j=0; j<a; j++)
        {
            if(vec2[i].second==vec1[j].second)
            {
                cout << vec2[i].first << " " << vec2[i].second << " #"<<vec1[j].first<<endl;
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
