#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string x,y,z;
    cin >> x >> y >> z;

    if(x[0]>96)
    {
        printf("%c",x[0]-32);
    }
    else
    {
        cout << x[0];
    }
    if(y[0]>96)
    {
        printf("%c",y[0]-32);
    }
    else
    {
        cout << y[0];
    }
    if(z[0]>96)
    {
        printf("%c",z[0]-32);
    }
    else
    {
        cout << z[0];
    }

    return 0;
}
