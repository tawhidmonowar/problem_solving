#include <iostream>
#include <string>
#define loop(a,b) for (a;a<b;a+=2)
using namespace std;

int main()
{
    int i,n,rCount=0;
    cin >> n;
    string x;
    cin >> x;

    i=0;
    loop(i,n)
    {
        if(x[i]=='a'&&x[i+1]=='a')
        {
            x[i+1]='b';
            rCount++;
        }
        else if (x[i]=='b'&&x[i+1]=='b')
        {
            x[i+1]='a';
            rCount++;
        }
    }

    cout << rCount << endl << x;

    return 0;
}
