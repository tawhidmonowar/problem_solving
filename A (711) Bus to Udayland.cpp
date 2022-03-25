#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j=0,n,t,temp=0;
    cin >> n;
    string x[n];

    for(i=0; i<n; i++)
    {
        cin >> x[i];
    }

    t=n;
    while(t--)
    {
        for(i=0; i<5; i++)
        {
            if(x[j][i]=='O'&&x[j][i+1]=='O')
            {
                temp=1;
                x[j][i]='+';
                x[j][i+1]='+';
                t=0;
                break;
            }
        }
        j++;
    }

    if(temp)
    {
        cout << "YES" << endl;
        for(i=0; i<n; i++)
        {
            cout << x[i] << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
