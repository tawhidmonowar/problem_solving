#include <iostream>
#define loop(a,b) for(a;a<b;a++)
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int x,temp;
        cin >> x;
        if(x%10==0)
        {
            cout << x/10 << endl;
        }
        else if(x%5==0)
        {
            temp=x-5;
            cout  << (x/10)+1 << endl;
        }
        else
        {
            cout << -1 <<endl;
        }
    }

    return 0;
}
