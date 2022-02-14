#include <math.h>
#include <iostream>
using namespace std;

int main()
{
    double n;

    cin >> n;

    if(pow(2,n)>pow(n,2))
    {
        cout << "Yes" << endl;
    }else
    {
        cout << "No" << endl;
    }

    return 0;
}
