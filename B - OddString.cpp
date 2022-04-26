#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string x;
    cin >> x;
    int i;

    for(i=0;i<x.length();i+=2)
    {
        cout << x[i];
    }

    return 0;
}
