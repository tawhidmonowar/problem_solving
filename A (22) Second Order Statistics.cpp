#include <bits/stdc++.h>
#define infinity 1000000000000000LL
#define all(x) (x).begin(),(x).end()
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod(x,m) ((x%m)+m)%m;
#define pi acos(-1)
#define endl "\n"
/*Author: TawhidMonowar*/
const int MOD = (int)1e9+7;
typedef long long int ll;
using namespace std;
const int MAX = 1e6;

void solve()
{
    int i,n,temp;
    cin >> n;
    set<int>st;

    for(i=0; i<n; i++)
    {
        cin >> temp;
        st.insert(temp);
    }

    auto it = st.begin();
    it++;
    if(st.size()==1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << *it << endl;
    }

}

int main()
{
    FastRead
    solve();

    return 0;
}
