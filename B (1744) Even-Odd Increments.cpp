#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n,q;
    cin >>n>>q;
    long arr[n];
    long even=0,odd=0,res=0;
    long evenCount=0,oddCount=0;

    for(long i=0; i<n; i++)
    {
        cin >> arr[i];

        if(arr[i]%2==0)
        {
            even+=arr[i];
            evenCount++;
        }
        else
        {
            odd+=arr[i];
            oddCount++;
        }
    }

    vector<pair<long,long>>vect;
    long temp,temp2;

    for(long i=0; i<q; i++)
    {
        cin >> temp;
        cin >> temp2;
        vect.push_back(make_pair(temp,temp2));
    }

    for(long i=0; i<q; i++)
    {
        if(vect[i].first==0)
        {
            if(vect[i].second%2==0)
            {
                even+=vect[i].second*evenCount;
            }
            else
            {
                even+=vect[i].second*evenCount;
                oddCount+=evenCount;
                evenCount=0;
            }
        }
        else
        {
            if(vect[i].second%2==0)
            {
                odd+=vect[i].second*oddCount;
            }
            else
            {
                odd+=vect[i].second*oddCount;
                evenCount+=oddCount;
                oddCount=0;
            }
        }

        cout << even+odd << endl;
    }
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