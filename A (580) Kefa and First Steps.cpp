#include <iostream>
#define loop(a,b) for (a;a<b;a++)
using namespace std;

int main()
{
    int i,n;
    cin >> n;
    int x[n];

    i=0;
    loop(i,n)
    {
        cin >> x[i];
    }

    int temp=1, xCount=1;
    i=0;

    loop(i,n-1)
    {
        if(x[i]<=x[i+1])
        {
            xCount++;
            if(xCount>temp)
            {
                temp=xCount;
            }
        }
        else
        {
            xCount=1;
        }
    }

    cout << temp;

    return 0;
}
