#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n,m;
    cin >>n>>m;
    long arr[n];
    long damageP[n]={0};
    long damage=0,damageN[n]={0};

    for(long i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    vector<pair<int,int>>vect;

    long temp,temp2;
    for(long i=0; i<m; i++)
    {
        cin >> temp;
        cin >> temp2;
        vect.push_back(make_pair(temp,temp2));
    }

    for(long i=1; i<n; i++)
    {
        if(arr[i-1]>arr[i])
        {
            damage = arr[i-1]-arr[i];
            damageP[i]=damageP[i-1]+damage;
        }
        else
        {
            damageP[i]=damageP[i-1];
        }
    }

    for(long i=n-2; i>=0; i--)
    {
        if(arr[i]<arr[i+1])
        {
            damage=arr[i+1]-arr[i];
            damageN[i]=damageN[i+1]+damage;
        }
        else
        {
            damageN[i]=damageN[i+1];
        }
    }

    for(long i=0; i<m; i++)
    {
        if(vect[i].first<vect[i].second)
        {
            cout << damageP[vect[i].second-1]-damageP[vect[i].first-1] << endl;
        }
        else
        {
            cout << damageN[vect[i].second-1]-damageN[vect[i].first-1] << endl;
        }
    }

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}