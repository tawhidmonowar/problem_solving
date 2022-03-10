#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int i,x,y;
        cin >> x;
        y=pow(2,x);
        cout << y-1 << endl;
    }

    return 0;
}
