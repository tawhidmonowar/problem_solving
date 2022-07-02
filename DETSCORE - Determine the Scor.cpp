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
        int x,n;
        cin >> x >> n;
        cout << (x/10)*n<< endl;
    }

    return 0;
}
