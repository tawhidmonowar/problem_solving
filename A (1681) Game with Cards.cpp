#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int i,n,m;

        cin >> n;
        int x[n];

        for(i=0;i<n;i++)
        {
            cin >> x[i];
        }

        cin >> m;
        int y[m];

        for(i=0;i<m;i++)
        {
            cin >> y[i];
        }

        sort(x,x+n);
        sort(y,y+m);

        if(x[n-1]==y[m-1])
        {

            cout << "Alice\n";
            cout << "Bob\n";

        }
        else if(x[n-1]>y[m-1])
        {
            cout << "Alice\n";
            cout << "Alice\n";
        }
        else
        {
            cout << "Bob\n";
            cout << "Bob\n";
        }
    }

    return 0;
}
