#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int x,y,chocolates=0;
        cin >> x;
        y=x*1000;

        while(x<=y)
        {
            y-=100;
            chocolates++;
        }

        cout << chocolates << endl;
    }

    return 0;
}
