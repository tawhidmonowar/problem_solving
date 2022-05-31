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
        int i,n,odd=0,even=0;
        cin >> n;
        int x[n];

        for(i=0; i<n; i++)
        {
            cin >> x[i];
        }

        for(i=0; i<n; i++)
        {
            if((x[i])%2==0)
            {
                even++;
            }
            else
            {
                odd++;

            }
        }

        if(odd==0)
        {
            cout << odd << endl;
        }
        else if(even==0)
        {
            cout << even << endl;
        }
        else if(odd>even)
        {
            cout << even << endl;
        }
        else if (even>odd)
        {
            cout << odd << endl;
        }
        else if (even==odd)
        {
            cout << odd << endl;
        }
    }


    return 0;
}
