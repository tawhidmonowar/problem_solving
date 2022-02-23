#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        if(a<=b && a<=c)
        {
            cout << b+c << endl;

        }else if(b<=a && b<=c)
        {
            cout << a+c << endl;

        }else
        {
            cout << a+b << endl;
        }
    }

    return 0;
}
