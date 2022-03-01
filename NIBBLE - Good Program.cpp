#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int x;
        cin >> x;

        if(x%4==0)
        {
            cout << "Good\n";
        }
        else
        {
            cout << "Not Good\n";
        }
    }

    return 0;
}
