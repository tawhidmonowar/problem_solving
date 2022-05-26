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
        int i,n,temp=1;
        cin >> n;
        int x[n];

        for(i=0;i<n;i++)
        {
            cin >> x[i];
        }

        for(i=1;i<n;i++)
        {
            if(x[i]<=x[i+1])
            {
                continue;
            }
            else
            {
                temp = -1;
                break;
            }
        }

        if(temp==1)
        {
            cout << "Yes\n";
        }else
        {
            cout << "No\n";
        }
    }

    return 0;
}
