#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int i,n,temp=0;
    cin >> n;
    int arr[n];

    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    unordered_map<int, int>m;

    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (auto x : m)
    {
        if(x.first>x.second)
        {
            temp+=x.second;
        }
        else if(x.first<x.second)
        {
            temp+=x.second-x.first;
        }
    }

    cout << temp;

    return 0;
}
