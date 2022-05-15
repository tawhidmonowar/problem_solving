#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int i,n,countX=0;
        cin >> n;
        int x[n];

        for(i=0;i<n;i++)
        {
            cin >> x[i];
            if(x[i]>=1000)
            {
                countX++;
            }
        }

        cout << countX << endl;
    }


    return 0;
}