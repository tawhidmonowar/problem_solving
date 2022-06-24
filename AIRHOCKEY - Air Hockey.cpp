#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int x,y;
        cin >> x >>y;
        if(x>y)
        {
            cout << 7-x <<endl;
        }
        else
        {
            cout << 7-y <<endl;
        }
    }

    return 0;
}
