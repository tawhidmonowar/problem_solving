#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int n;
        cin >> n;

        if(n%4)
        {
            cout << (n/4)+1 << endl;
        }else
        {
            cout << n/4 << endl;
        }
    }

    return 0;
}
