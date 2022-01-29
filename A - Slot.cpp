#include <iostream>
using namespace std;

int main()
{
    char a,b,c;
    cin >> a >> b >> c;

    if(a==b && b==c)
    {
        cout << "Won" << endl;
    }else
    {
        cout << "Lost" << endl;
    }

    return 0;
}
