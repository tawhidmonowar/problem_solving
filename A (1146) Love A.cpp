#include <iostream>
#include <string>
#define loop(a,b) for (a;a<b;a++)
using namespace std;

int main()
{
    string x;
    cin >> x;

    int xLen = x.length();

    int i=0,aCount=0,notA=0;

    loop(i,xLen)
    {
        if(x[i]=='a')
        {
            aCount++;
        }
    }

    notA = xLen-aCount;

    while(aCount<=notA)
    {
        notA--;
    }

    cout << notA+aCount;

    return 0;
}
