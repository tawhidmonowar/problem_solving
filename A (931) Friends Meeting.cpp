#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin >>a>>b;
    int temp = abs(a-b);

    if(temp%2==0)
    {
        int div = temp/2;
        cout << ((div*(div+1))/2)*2;
    }
    else
    {
        int div = (temp/2);
        int ans = ((div*(div+1))/2);
        div++;
        ans += ((div*(div+1))/2);
        cout << ans;
    }
}

int main()
{
    solve();
    return 0;
}
