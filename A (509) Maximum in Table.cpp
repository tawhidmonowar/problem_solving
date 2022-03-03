#include <iostream>
using namespace std;

int main()
{
    int i=0,j=0,n;
    cin >> n;
    int x[n][n];

    for(i=0; i<=n; i++)
    {
        x[0][i]=1;
        x[i][0]=1;
    }

    for(i=1; i<n; i++)
    {
        for(j=1; j<n; j++)
        {
            x[i][j]=x[i-1][j]+x[i][j-1];
        }
    }

    if(n==1)
    {
        cout << x[0][0];
    }
    else
    {
        cout << x[i-1][j-1];
    }

    return 0;
}
