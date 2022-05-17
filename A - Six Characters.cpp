#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string x;
    cin >> x;

    if(x.length()==3)
    {
        cout << x << x <<endl;
    }
    else if(x.length()==2)
    {
        cout << x << x << x <<endl;
    }
    else
    {
        for(int i=0;i<6;i++)
        {
            cout << x;
        }
    }

    return 0;
}
