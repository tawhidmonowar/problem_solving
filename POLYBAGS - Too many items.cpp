#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int a,temp;
        cin >> a;
        float result;
        result = (float)a/10;
        temp = (int)result;

        if (result > (float)temp)
        {
            cout << (int)result+1 << endl;
        }else
        {
            cout << result << endl;
        }
    }

    return 0;
}
