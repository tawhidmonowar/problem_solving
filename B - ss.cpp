#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x,y,z;
    cin >> x;
    int xLen = x.length(),temp;
    bool stop = false;

    x.erase(xLen-1);

    while(!stop)
    {
        xLen = x.length();
        if(!(xLen%2))
        {
            temp=xLen/2;
            y = x.substr(0,temp);
            z = x.substr(temp,xLen);

            if(y.compare(z)==0)
            {
                cout << y.length()+z.length();
                stop=true;
            }
            else
            {
                x.erase(xLen-1);
                x.erase(xLen-2);
            }
        }
        else
        {
            x.erase(xLen-1);
        }
    }

    return 0;
}