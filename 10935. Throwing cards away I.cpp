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

void solve()
{
    int n;
    while(cin>>n&&n!=0)
    {
        queue<int>st;

        for(int i=1; i<=n; i++)
        {
            st.push(i);
        }

        cout << "Discarded cards:";
        while (st.size()>1)
        {
            cout << " " << st.front();
            st.pop();

            if(st.size()!=1)
            {
                cout << ",";
            }
            st.push(st.front());
            st.pop();
        }
        cout << endl << "Remaining card: "<<st.front()<<endl;
    }
}

int main()
{
    solve();
    return 0;
}
