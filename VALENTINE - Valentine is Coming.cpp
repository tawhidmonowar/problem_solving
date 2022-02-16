#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int x,y,chocolates=0;
        cin >> x >> y;

        while(x>=y)
        {
            x-=y;
            chocolates++;
        }

        cout << chocolates << endl;
    }

    return 0;
}
