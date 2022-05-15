#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int x,y,a,b;
    cin >> x >> a >> b;

    if(a+b>x)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }

    return 0;
}
