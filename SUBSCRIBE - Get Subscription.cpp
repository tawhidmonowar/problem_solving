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
        int n;
        cin >> n;

        if(n>30)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }


    return 0;
}
