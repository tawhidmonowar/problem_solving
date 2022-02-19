#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b,c;
    char x,y;
    cin >> a >> b;
    int i,stlA,stlB;

    stlA = a.size();
    stlB = b.size();

    c = a+b;

    cout << stlA << " " << stlB << endl;
    cout << c << endl;

    x=a[0];
    y=b[0];

    a[0]=y;
    b[0]=x;

    cout << a << " "<< b;

    return 0;
}
