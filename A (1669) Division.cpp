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
        int x;
        cin >> x;

        if(x<=1399)
        {
            cout << "Division 4" << endl;
        }
        else if(1400<=x&&x<=1599)
        {
            cout << "Division 3" << endl;
        }
        else if(1600<=x&&x<=1899)
        {
            cout << "Division 2" << endl;
        }
        else if(1900<=x)
        {
            cout << "Division 1" << endl;
        }
    }

    return 0;
}
