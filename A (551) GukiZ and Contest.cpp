#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    auto itr = mp.rbegin();
    int temp = mp[itr->first];
    mp[itr->first]=1;
    itr++;

    for(auto it=itr; it!=mp.rend(); it++)
    {
        int temp2=mp[it->first];
        mp[it->first]=temp+1;
        temp+=temp2;
    }

    for(int i=0; i<n; i++)
    {
        cout << mp[arr[i]] << " ";
    }
}

int main()
{
    solve();
    return 0;
}
