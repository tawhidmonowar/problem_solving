#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    if(a*6>=b && a<=b)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}