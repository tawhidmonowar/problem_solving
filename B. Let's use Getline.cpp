#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string x,y="\\";
    getline(cin,x);
    int i,temp=x.find(y);

    for(i=0;i<temp;i++)
    {
        cout << x[i];
    }

    return 0;
}