#include <iostream>
#include <string>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int a,b,x,y,aB,xY;
        cin >> a >> b >> x >> y;

        aB = a*b;
        xY = x*y;

        if(xY>=aB)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
