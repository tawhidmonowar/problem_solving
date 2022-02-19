#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

    double x,y;

    cin >> x;
    y=(x*(12800000+x));

    cout << fixed;
    cout << setprecision(2) << sqrt(y);

    return 0;
}
