#include <iostream>
using namespace std;

int main()
{
    int i,n,x=0,y=0,r=0;
    cin >> n;
    string t;
    cin >> t;

    for(i=0; i<n; i++)
    {

        if(t[i]=='R')
        {
            r++;
        }

        if(r>3)
        {
            r=0;
        }

        if(r==0&&t[i]=='S')
        {
            x++;
        }
        else if(r==1&&t[i]=='S')
        {
            y--;
        }
        else if(r==2&&t[i]=='S')
        {
            x--;
        }
        else if(r==3&&t[i]=='S')
        {
            y++;
        }
    }

    cout << x << " " << y;

    return 0;
}