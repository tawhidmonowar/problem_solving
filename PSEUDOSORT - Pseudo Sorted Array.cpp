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
        int i,n,temp=0;
        cin >> n;
        int x[n];

        for(i=0; i<n; i++)
        {
            cin >> x[i];
        }

        for(i=0; i<n-1; i++)
        {
            if(x[i]>x[i+1])
            {
                temp++;
            }
            if(i<n-2 && x[i]>x[i+2])
            {
                temp++;
            }
        }

        if(temp<2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
