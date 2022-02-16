#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n,x,y;
        cin >> n >> x >> y;

        int smoke=0,carP;

        carP = (100/4)*y;

        while(n>=100)
        {
            if(carP>=x)
            {
                smoke += x;
                n-=100;

            }
            else
            {
                smoke += carP;
                n-=100;
            }
        }

        float tempF;
        tempF = ((double)n/4);

        if((int)tempF!=tempF)
        {
            tempF+=1;
        }

        carP = (int)tempF*y;

        while(n>0)
        {
            if(carP>=x)
            {
                smoke += x;
                n=0;

            }
            else
            {
                smoke += carP;
                n=0;
            }
        }

        cout << smoke << endl;
    }

    return 0;
}
