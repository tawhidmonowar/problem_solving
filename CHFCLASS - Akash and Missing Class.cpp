#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int x,xCount=0;
        cin >> x;

        if(x>=6)
        {
            xCount++;
            x-=6;
        }

        cout << (x/7)+xCount << endl;
    }

    return 0;
}
