#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long intMax = 0;
    long intMin = INT_MAX;

    long n;
    cin >> n;

    long arr[n];

    for(long i=0; i<n; i++)
    {
        cin >> arr[i];

        if(arr[i]>intMax)
        {
            intMax = arr[i];
        }

        if(arr[i]<intMin)
        {
            intMin = arr[i];
        }
    }

    cout << intMax-intMin << endl;

}

int main()
{
    ios::sync_with_stdio(0);
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