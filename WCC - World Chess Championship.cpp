#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int i,x,chef=0,carlsen=0,resLen;
        int carlsenPrize=0;
        char result [100];

        cin >> x >> result;
        resLen = strlen(result);

        for(i=0; i<resLen; i++)
        {
            if(result[i]=='C')
            {
                carlsen+=2;
            }
            else if(result[i]=='N')
            {
                chef+=2;
            }
            else
            {
                carlsen++;
                chef++;
            }
        }

        if(carlsen>chef)
        {
            carlsenPrize = 60*x;

        }
        else if(carlsen<chef)
        {
            carlsenPrize = 40*x;
        }
        else
        {
            carlsenPrize = 55*x;
        }

        cout << carlsenPrize << endl;
    }
    return 0;
}
