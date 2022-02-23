#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int i,w,n,temp=0,nCount=1,result;
        cin >> w >> n;
        int j=1,x[w];

        for(i=0;i<w;i++)
        {
            cin >> x[i];
        }

        sort(x, x+w,greater<int>());

        temp += x[0];

        for(i=0;i<=w;i++)
        {
            if(temp>=n)
            {
                result=w-nCount;
                cout << result << endl;
                break;
            }else
            {
                temp+=x[j];
                j++;
                nCount++;
            }
        }
    }

    return 0;
}
