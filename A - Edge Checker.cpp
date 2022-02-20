#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    if(a==b+1||a==b-1 || a==b+9 || a==b-9)
    {
        cout << "Yes";
    }else
    {
        cout << "No";
    }

    return 0;
}
