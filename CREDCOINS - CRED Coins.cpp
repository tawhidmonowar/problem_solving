#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int x,y;
        cin >> x >> y;
        cout << (x*y)/100 << endl;
    }

    return 0;
}
