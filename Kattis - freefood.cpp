#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int testCase,frArray[365]={0};
    int temp=0;
    cin >> testCase;

    while(testCase--)
    {
        int i,x,y;
        cin >> x >> y;
        for(i=x;i<=y;i++)
        {
            frArray[i-1]=1;
        }
    }

    for(int i=0;i<=365;i++)
    {
        if(frArray[i]==1)
        {
            temp++;
        }
    }

    cout << temp;

    return 0;
}
