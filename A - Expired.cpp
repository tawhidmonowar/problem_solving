#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int x,a,b;
    cin >>x>>a>>b;

    if(a<b && a+x>=b)
    {
        cout << "safe\n";
    }
    else if(a+x<b)
    {
        cout << "dangerous\n";
    }
    else if(b<=a)
    {
        cout << "delicious\n";
    }

    return 0;
}
