#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int x,y;
        cin >> x >> y;

        if((x+y)%2==0)
        {
            cout << "Janmansh\n";
        }
        else
        {
            cout << "Jay\n";
        }
    }

    return 0;
}
