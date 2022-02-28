#include <iostream>
#include <string>
#define loop(a,b) for (a;a<b;a++)
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        string a,b;
        cin >> a;

        int i=0,aLen;
        aLen = a.length();

        loop(i,aLen)
        {
            if(i==aLen-2)
            {
                cout << a[i];
            }
            else
            {
                cout << a[i];
                i++;
            }
        }
        cout << "\n";
    }

    return 0;
}
