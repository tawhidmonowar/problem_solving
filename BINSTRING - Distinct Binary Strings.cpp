#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int i,n,countD=1;
        string x;
        cin >> n;
        cin >> x;

        for(i=1; i<n; i++)
        {
            if(x[i-1]!=x[i])
            {
                countD++;
            }
        }

        cout << countD << endl;
    }

    return 0;
}
