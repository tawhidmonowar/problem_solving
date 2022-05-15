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
        int w,x,y,z;
        cin >>w>>x>>y>>z;
        int capacity=x-w, temp=y*z;

        if(capacity==temp)
        {
            cout <<"filled"<< endl;
        }
        else if(capacity>temp)
        {
            cout <<"Unfilled"<< endl;
        }
        else
        {
            cout <<"overFlow"<< endl;
        }
    }


    return 0;
}
