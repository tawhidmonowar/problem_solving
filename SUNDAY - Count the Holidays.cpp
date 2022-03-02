#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int i,n,holiDays=8;
        cin >> n;
        int y[n];

        for (i=0;i<n;i++)
        {
            cin >> y[i];
        }

        for(i=0;i<n;i++)
        {
            if((y[i]!=6)&&(y[i]!=7)&&(y[i]!=13)&&(y[i]!=14)&&(y[i]!=20)&&(y[i]!=21)&&(y[i]!=27)&&(y[i]!=28))
            {
                holiDays++;
            }
        }

        cout << holiDays << "\n";
    }

    return 0;
}
