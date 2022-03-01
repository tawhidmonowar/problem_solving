#include <iostream>
using namespace std;

int main()
{
    int a,b,c,result=1;
    cin >> a >> b >> c;

    if(a!=b && b!=c && c!=a)
    {
        result=3;
    }
    else if (a==b && a!=c)
    {
        result=2;
    }
    else if (a==c && a!=b)
    {
        result=2;
    }
    else if (c==b && c!=a)
    {
        result=2;
    }

    cout << result;

    return 0;
}
