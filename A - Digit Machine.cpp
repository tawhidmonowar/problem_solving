#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,x[10],temp,temp2,temp3;

    for(i=0;i<=9;i++)
    {
        cin >> x[i];
    }

    temp = x[0];
    temp2 = x[temp];
    temp3 = x[temp2];

    cout << temp3;

    return 0;
}
