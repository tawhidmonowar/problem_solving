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
        int x,temp;
        cin >> x;
        temp = (x*10)/100;

        if(temp>100)
        {
            cout << temp << endl;
        }
        else
        {
            cout << 100 << endl;
        }
    }

    return 0;
}
