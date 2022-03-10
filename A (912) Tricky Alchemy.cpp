#include <bits/stdc++.h>
#include <iomanip>
typedef long long ll;
using namespace std;

int main()
{
    ll a,b,x,y,z;
    cin >> a >> b >> x >> y >> z;

    a-=x*2;
    a-=y;
    b-=y;
    b-=z*3;

    if(a<0 && b<0)
    {
        cout << abs(a)+abs(b);
    }
    else if(a<0 && b>=0)
    {
       cout << abs(a);
    }
    else if (a>=0 && b<0)
    {
        cout << abs(b);
    }else
    {
        cout << 0;
    }

    return 0;
}
