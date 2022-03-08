#include <iostream>
#include <string>
#define loop(a,b) for (a;a<b;a+=2)
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int i,sLen;
        string stringX;
        cin >> stringX;
        char x;
        cin >> x;
        i=0,sLen=stringX.length();

        int temp=0;
        loop(i,sLen)
        {
            if(stringX[i]==x)
            {
                temp=1;
                break;
            }
        }

        if(temp==1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n" ;
        }
    }

    return 0;
}
