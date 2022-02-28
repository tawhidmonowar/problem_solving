#include <iostream>
#include <string>
#define loop(a,b) for (a;a<b;a++)
using namespace std;

int main()
{
    string x;
    cin >> x;

    int xLen = x.length();

    int i=0,temp=0;

    loop(i,xLen)
    {
        if(x[i]=='W'&&x[i+1]=='U'&&x[i+2]=='B')
        {
            i+=2;

        }
        else
        {
            if(temp==1 && x[i-3]=='W'&&x[i-2]=='U'&&x[i-1]=='B')
            {
                cout << " " << x[i];
            }
            else
            {
                cout << x[i];
                temp=1;
            }
        }
    }

    return 0;
}
