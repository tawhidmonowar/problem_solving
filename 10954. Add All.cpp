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
string str,str2,str3;
int x,y,z,a,b,c;
bool stop,yes,on;

void solve()
{
    int n;
    while(cin>>n&&n!=0)
    {
        deque<int>arr;
        ll i,temp=0,total=0,sum=0;

        for(i=0; i<n; i++)
        {
            cin >> total;
            arr.push_back(total);
        }

        for(i=0; i<n-1; i++)
        {
            sort(arr.begin(),arr.end());
            temp=arr[0]+arr[1];
            sum+=temp;
            arr.pop_front();
            arr.pop_front();
            arr.push_front(temp);

        }
        cout << sum << endl;
    }
}


int main()
{
    FastRead
    solve();

    return 0;
}
