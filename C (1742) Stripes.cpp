#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string arr[10];
    for(int i=0; i<8; i++)
    {
        cin >> arr[i];
    }

    int R=0,B=0;

    for(int i=0; i<8; i++)
    {
        R=0;
        for(int j=0; j<8; j++)
        {
            if(arr[i][j]=='R')
            {
                R++;
            }
        }
        if(R==8)
        {
            cout << "R\n";
            return;
        }
    }

    for(int j=0; j<8; j++)
    {
        B=0;
        for(int i=0; i<8; i++)
        {
            if(arr[i][j]=='B')
            {
                B++;
            }
        }
        if(B==8)
        {
            cout << "B\n";
            return;
        }
    }

}

int main()
{
    int testCase;
    cin >> testCase;
    while(testCase--)
    {
        solve();
    }
    return 0;
}
