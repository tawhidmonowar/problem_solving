#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve(long test_case)
{
    long n;
    cin >> n;

    long arr[n*2];
    map<long,long>mp;

    for(long i=0; i<n*2; i++)
    {
        cin >> arr[i];
    }

    for(long i=0; i<n*2; i++)
    {
        mp[arr[i]]++;
        if(mp[arr[i]]<2)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long testCase;
    cin >> testCase;
    long test_case = testCase;

    while(testCase--)
    {
        solve(test_case-testCase);
    }

    return 0;
}
