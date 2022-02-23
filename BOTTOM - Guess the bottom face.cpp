#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int x,r;
        cin >> x;

        r=abs(7-x);

        cout << r << endl;

    }

    return 0;
}
