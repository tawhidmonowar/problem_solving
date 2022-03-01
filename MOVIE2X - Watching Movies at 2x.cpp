#include <iostream>
using namespace std;

int main()
{
    int x,y,temp;
    cin >> x >> y;

    temp = x-y;
    y=y/2;

    cout << temp+y;

    return 0;
}
