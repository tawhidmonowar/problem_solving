#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        float x,x2,y,y2;
        cin >> x >> x2 >> y >> y2;

        float car1,car2;

        car1 = x/y;
        car2 = x2/y2;

        if(car1==car2)
        {
            cout << "0\n";
        }
        else if(car1>car2)
        {
            cout << "-1\n";
        }else
        {
            cout << "1\n";
        }
    }

    return 0;
}
