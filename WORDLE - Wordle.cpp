#include <iostream>
#include <string>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        string x,y;
        cin >> x >> y;

        for(int i=0;i<x.length();i++)
        {
            if(x[i]==y[i])
            {
                cout << "G";
            }else
            {
                cout << "B";
            }
        }
        cout << "\n";
    }

    return 0;
}
