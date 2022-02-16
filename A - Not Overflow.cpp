#include <math.h>
#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;

    if(n>=(-pow(2,31))&&n<=(pow(2,31))-1)
    {
        cout << "Yes" << endl;

    }else
    {
        cout << "No" << endl;
    }

    return 0;
}
