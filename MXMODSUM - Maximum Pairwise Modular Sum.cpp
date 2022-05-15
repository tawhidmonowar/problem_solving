#include <bits/stdc++.h>
using namespace std;
#define mod(x,m) ((x%m)+m)%m;

void pairs(int x[], int n, int m)
{
    int i,j,temp=0,temp2=0,xx;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            xx=(x[i]-x[j]);
            temp = x[i]+x[j]+mod(xx,m);

            if(temp>temp2)
            {
                temp2=temp;
            }
        }
    }

    cout << temp2 << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int i,n,m;
        cin >>n>>m;
        int x[n];

        for(i=0; i<n; i++)
        {
            cin >> x[i];
        }

        pairs(x,n,m);
    }

    return 0;
}
