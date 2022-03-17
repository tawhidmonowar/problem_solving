#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int n,x,k,result;
        cin >> n >> x >> k;

        result = k/x;
        if (result>n)
        {
            cout << n << endl;
        }
        else
        {
            cout << result << endl;
        }
    }

    return 0;
}
