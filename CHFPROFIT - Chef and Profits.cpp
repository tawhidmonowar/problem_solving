#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin>>testCase;

    while(testCase--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        cout<<(x*z)-(x*y)<<endl;
    }

    return 0;
}
