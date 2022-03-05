#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int i,x,a,b,c;
        cin >>x>>a>>b>>c;
        int total=0,xCount=0,temp[]={a,b,c};
        sort(temp, temp + 3);

        total = temp[0]+temp[1];
        xCount = 2;

        while(xCount!=x)
        {
            total+=temp[0];
            xCount++;
        }

        cout << total << endl;
    }

    return 0;
}
