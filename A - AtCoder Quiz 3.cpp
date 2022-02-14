#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    double n;
    cin >> n;

    if(n>=42)
    {
        cout << "AGC0" << n+1 << endl;

    }else if(n<10)
    {
        cout << "AGC00" << n << endl;
    }else
    {
        cout << "AGC0" << n << endl;
    }

    return 0;
}
