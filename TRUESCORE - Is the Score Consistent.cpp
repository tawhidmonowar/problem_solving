#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int w,x,y,z;
        cin >>w>>x>>y>>z;

        if(w>y||x>z)
        {
            cout << "IMPOSSIBLE\n";
        }
        else
        {
            cout << "POSSIBLE\n";
        }
    }
    return 0;
}
