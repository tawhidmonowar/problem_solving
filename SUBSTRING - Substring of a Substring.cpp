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
        int i,sLen,pCount=0,temp=0;
        string s;
        cin >> s;
        sLen = s.length();

        i=0;
        loop(i,sLen)
        {
            if(s[i]!=s[0] && s[i]!=s[sLen-1])
            {
                temp++;
            }
            else
            {
                temp=0;
            }

            if(temp>pCount)
            {
                pCount = temp;
            }
        }

        if(pCount==0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << pCount << endl;
        }
    }

    return 0;
}