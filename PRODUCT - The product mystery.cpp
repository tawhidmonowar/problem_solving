#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int a,b;
        cin >> a >> b;
        cout << b/__gcd(a,b) << endl;
    }

    return 0;
}
