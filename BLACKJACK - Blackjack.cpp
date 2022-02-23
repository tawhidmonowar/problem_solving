#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int a,b,result;
        cin >> a >> b;
        result = 21-(a+b);
        
        if(result>10)
        {
            cout << -1 << endl;
        }else
        {
            cout << result << endl;
        }
        
    }

    return 0;
}
