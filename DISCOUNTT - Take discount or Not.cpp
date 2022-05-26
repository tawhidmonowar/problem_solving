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
        int i,n,x,y,temp=0,temp2=0,sum=0;
        cin >>n>>x>>y;
        int item[n];

        for(i=0;i<n;i++)
        {
            cin >> item[i];
            temp+=item[i];

            if(item[i]>y)
            {
                temp2+=item[i]-y;
            }
        }

        sum = x+temp2;

        if(sum<temp)
        {
            cout << "COUPON\n";
        }
        else
        {
            cout << "NO COUPON\n";
        }

    }

    return 0;
}
