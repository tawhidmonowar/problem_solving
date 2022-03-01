#include <iostream>
#include <string>
#define loop(a,b) for (a;a<b;a++)
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        string x;
        cin >> x;
        int i=0,xLen,aCount=0,bCount=0,cCount=0;
        xLen=x.length();

        loop(i,xLen)
        {
            if(x[i]=='A')
            {
                aCount++;
            }
            else if(x[i]=='B')
            {
                bCount++;
            }
            else
            {
                cCount++;
            }
        }

        int temp;

        temp = aCount;
        aCount-=bCount;
        bCount-=temp;

        temp = cCount;
        cCount-=bCount;
        bCount-=temp;

        if(aCount<=0&&bCount<=0&&cCount<=0)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
