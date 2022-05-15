#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int x,y,z;
        cin >> x >> y >> z;

        if((y/x)>z)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << z-(y/x) << endl;
        }
    }
    
    return 0;
}
