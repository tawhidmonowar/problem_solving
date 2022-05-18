#include <bits/stdc++.h>
using namespace std;

int countZero(int x[], int n)
{
    int i,zero=0;

    for(i=0;i<n;i++)
    {
        if(x[i]==0)
        {
            zero++;
        }
        else
        {
            break;
        }
    }
    return zero;
}

bool samePair(int x[], int n)
{
    int i;
    bool same = false;

    for(i=0;i<n-1;i++)
    {
        if(x[i]==x[i+1])
        {
            same=true;
            break;
        }
    }
    return same;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int i, n, zero;
        cin >> n;
        int x[n];
        bool same;

        for(i=0;i<n;i++)
        {
            cin >> x[i];
        }

        sort(x,x+n);
        zero = countZero(x,n);
        same = samePair(x,n);

        if(zero==n)
        {
            cout << 0 << endl;
        }
        else if(zero==0 && !same)
        {
            cout << 2+(n-1) << endl;
        }
        else if(zero!=0)
        {
            cout << n-zero << endl;
        }
        else if(same)
        {
            cout << n << endl;
        }
    }

    return 0;
}
