#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int a,b,c;
        cin >> a >> b >>c;

        if((a+c)>b)
        {
            cout << a+c << endl;
        }else
        {
            cout << b << endl;
        }
    }

    return 0;
}
