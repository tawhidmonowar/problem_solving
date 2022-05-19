#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        string x;
        cin >> x;
        int xLen = x.length();
        int i,a2=0,b2=0,a3=0,b3=0;

        for(i=0; i<xLen-1; i++)
        {
            if(x[i]=='a'&&x[i+1]=='a'&&x[i+2]=='a'&&x[i+3]!='a')
            {
                a3++;
                i+=2;
            }
            else if(x[i]=='b'&&x[i+1]=='b'&&x[i+2]=='b'&&x[i+3]!='b')
            {
                b3++;
                i+=2;
            }
            else if(x[i]=='a'&&x[i+1]=='a')
            {
                a2++;
                i++;
            }
            else if(x[i]=='b'&&x[i+1]=='b')
            {
                b2++;
                i++;
            }
        }

        if(xLen==(3*a3)+(3*b3)+(2*a2)+(2*b2))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
