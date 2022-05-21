#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int i,x,y;

    cin >>x>>y;

    vector<string>v(x);

    for(i=0;i<x;i++)
    {
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    for(i=0;i<x;i++)
    {
        cout << v[i];
    }

    return 0;
}
