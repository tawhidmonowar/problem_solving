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
        int n;
        cin >> n;

        if(n>4)
        {
            cout << n-(n/5) << endl;
        }
        else if (n<4)
        {
            cout << n << endl;
        }
        else
        {
            cout << 4 << endl;
        }
    }

    return 0;
}
