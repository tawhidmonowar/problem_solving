#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int i,n,countW=0;
        cin >> n;
        int x[n];

        for (i=0; i<n; i++)
        {
            cin >> x[i];
            if(x[i]>=10 && x[i]<=60)
            {
                countW++;
            }
        }

        cout << countW << "\n";
    }

    return 0;
}
