#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int i,j,n,res=0,temp=0,cnt=0;
    cin >> n;

    for(i=1; res<=n; i++)
    {
        temp+=i;
        res+=temp;
        if(res<=n)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

}

int main()
{
    solve();
    return 0;
}
