#include <iostream>
using namespace std;

int main()
{
    int x,y,z,total=0;
    cin >> x >> y >> z;

    while(x>0 && y>1 && z>3)
    {

        total++;
        x--;
        y-=2;
        z-=4;
    }

    cout << total*7;

    return 0;
}
