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

        if(n%3==0)
        {
            cout << "NORMAL" << endl;

        }
        else if (n%3==1)
        {
            cout << "HUGE" << endl;
        }
        else
        {
            cout << "SMALL" << endl;
        }
    }

    return 0;
}

