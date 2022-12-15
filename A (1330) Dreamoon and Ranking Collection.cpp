#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n,res,result=0;
    cin >> n >> res;
    int arr[n];
    map<int, int> mp;

    for(long i=0; i<n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    long i=1,temp=0;

    while(res!=0)
    {
        if(mp[i]==0)
        {
            res--;
        }

        if(res==0)
        {
            temp=-1;
            break;
        }
        else
        {
            i++;
        }
    }

    if(temp==-1 && mp[i+1]!=0)
    {
        for(long j=i+1; ; j++)
        {
            if(mp[j]==0)
            {
                break;
            }
            else
            {
                i++;
            }
        }
    }

    cout << i << endl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}