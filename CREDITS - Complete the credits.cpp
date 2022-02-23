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

        if(x>65)
        {
            cout << "Overload" << endl;

        }
        else if (x<35)
        {
            cout << "Underload" << endl;
        }
        else
        {
            cout << "Normal" << endl;
        }
    }

    return 0;
}
