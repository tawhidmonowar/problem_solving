#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n,m;
    cin >>n>>m;
    long arr[n];
    map<long,long>mp;
    long mx = INT_MIN;

    for(long i=0; i<n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
        if(arr[i]>mx)
        {
            mx=arr[i];
        }
    }

    for(long i=1; i<=mx; i++)
    {
        if(mp[i]==0 && m>0)
        {
            mp[i]++;
            m-=i;
        }
    }

    while(m>0)
    {
        if(m==0)
        {
            break;
        }
        mx++;
        if(m>=mx)
        {
            mp[mx]++;
            m-=mx;
        }
        else
        {
            cout << "NO" <<endl;
            return;
        }
    }


    for(long i=1; i<=mx; i++)
    {
        if(mp[i]==0)
        {
            cout << "NO" <<endl;
            return;
        }
    }

    if(m==0)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout << "NO" <<endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}