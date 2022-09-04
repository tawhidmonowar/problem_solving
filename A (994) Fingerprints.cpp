#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin >>n>>m;
    map<int,int>mp;
    vector<int>vect;

    for(int i=0; i<n; i++)
    {
        int temp;
        cin >> temp;
        vect.push_back(temp);
    }

    for(int i=0; i<m; i++)
    {
        int temp;
        cin >> temp;
        mp[temp]++;
    }

    for(int i=0; i<n; i++)
    {
       if(mp[vect[i]]>0)
       {
           cout << vect[i] << " ";
       }
    }

}

int main()
{
    solve();
    return 0;
}
