#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int i,n;
    cin >> n;

    for(i=0;i<n;i++)
    {
        int j,x,temp=0;

        cin >> x;
        int y[x];

        for(j=0;j<x;j++)
        {
            cin >> y[j];

            if(abs(y[j])>temp)
            {
                temp=abs(y[j]);
            }
        }

        cout << "Case "<<i+1<<": "<<temp<<endl;
    }

    return 0;
}
