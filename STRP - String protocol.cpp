#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int i,n,time=0;
        cin >> n;
        string x;
        cin >> x;

        for(i=0;i<n;i++)
        {
            if(x[i]==x[i+1])
            {
                time++;
                i++;
            }
            else
            {
                time++;
            }
        }

        cout << time << endl;
    }

    return 0;
}