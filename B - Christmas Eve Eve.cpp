#include <iostream>
using namespace std;

int main()
{
    int i,n,high,total=0,pay;
    cin >> n;
    int x[10000];

    for(i=0;i<n;i++)
    {
        cin >> x[i];
    }

    high = x[0];

    for(i=0;i<n;i++)
    {
        if(high<x[i])
        {
            high=x[i];
        }
    }

    for(i=0;i<n;i++)
    {
        total+=x[i];
    }

    pay = total-(high/2);

    cout << pay;

    return 0;
}
