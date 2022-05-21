#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int x,y;
    cin >> x >> y;

    if(x==y)
    {
        cout << x;
    }
    else if((x==0||x==1)&&(y==1||y==0))
    {
        cout << 2;
    }
    else if((x==1||x==2)&&(y==2||y==1))
    {
        cout << 0;
    }
    else if((x==0||x==2)&&(y==0||y==2))
    {
        cout << 1;
    }

    return 0;
}
