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
        int x,i=1;
        cin >> x;
        bool stop = false;

        while(!stop)
        {
            if((x&i)>0&&(x^i)>0)
            {
                cout << i << endl;
                stop = true;
            }
            else
            {
                i++;
            }
        }

    }

    return 0;
}
