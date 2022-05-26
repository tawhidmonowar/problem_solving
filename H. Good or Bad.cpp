#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        string x;
        cin >> x;
        int temp=0;

        for(int i=0; i<x.length();i++)
        {
            if((x[i]=='0'&&x[i+1]=='1'&&x[i+2]=='0') || (x[i]=='1'&&x[i+1]=='0'&&x[i+2]=='1'))
            {
                temp =-1;
                break;
            }
        }

        if(temp==-1)
        {
            cout << "Good\n";
        }
        else
        {
            cout << "Bad\n";
        }

    }

    return 0;
}