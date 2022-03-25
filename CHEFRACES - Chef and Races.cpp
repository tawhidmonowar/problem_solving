#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int x,y,a,b,res=0;
        cin >>x>>y>>a>>b;

        if(x!=a&&x!=b)
        {
            res++;
        }
        if(y!=a&&y!=b)
        {
            res++;
        }

        cout << res << endl;

    }

    return 0;
}
