#include <bits/stdc++.h>
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int x,y,z,mx,mn,md;
    cin >>x>>y>>z;
    mx = max(x,max(y,z));
    mn = min(x,min(y,z));
    if(mx!=x && mn!=x)
    {
        md=x;
    }
    else if(mx!=y && mn!=y)
    {
        md=y;
    }
    else if(mx!=z && mn!=z)
    {
        md=z;
    }

    cout << abs(md-mx)+abs(md-mn) << endl;

}

int main()
{
    FastRead
    solve();

    return 0;
}
