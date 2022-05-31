#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string w,x,y,z;
    cin >>x>>y>>z;
    w=x+y;

    sort(w.begin(),w.end());
    sort(z.begin(),z.end());

    if(w==z)
    {
        cout << "YES\n";
    }else
    {
        cout << "NO\n";
    }

    return 0;
}
