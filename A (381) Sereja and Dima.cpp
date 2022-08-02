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
    string str,str2,str3;
    int x,y,z,n,a,b,c;
    bool stop,yes,on;
    int temp=0,Sereja=0,Dima=0;

    deque<int>deq;
    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> temp;
        deq.push_back(temp);
    }

    for(i=0; i<n; i++)
    {
        j=deq.size()-1;

        if((i+1)%2==0)
        {
            if(deq[0]>deq[j])
            {
                Dima+=deq[0];
                deq.pop_front();
            }
            else
            {
                Dima+=deq[j];
                deq.pop_back();
            }
        }
        else
        {
            if(deq[0]>deq[j])
            {
                Sereja+=deq[0];
                deq.pop_front();
            }
            else
            {
                Sereja+=deq[j];
                deq.pop_back();
            }
        }
    }

    cout << Sereja <<" "<< Dima << endl;

}

int main()
{
    FastRead
    solve();

    return 0;
}
