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
        int x;
        cin >> x;
        if(x+3<=10)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}
