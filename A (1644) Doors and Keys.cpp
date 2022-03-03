#include <iostream>
#include <string>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        string x;
        cin >> x;

        int i=0,r=0,g=0,b=0;

        for(i=0; x[i]!='R'; i++)
        {
            if(x[i]=='r')
            {
                r=1;
            }
        }

        if(r==1)
        {
            for(i=0; x[i]!='G'; i++)
            {
                if(x[i]=='g')
                {
                    g=1;
                }
            }
        }

        if(g==1)
        {
            for(i=0; x[i]!='B'; i++)
            {
                if(x[i]=='b')
                {
                    b=1;
                }
            }
        }

        if(r==1 && g==1 && b==1)
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
