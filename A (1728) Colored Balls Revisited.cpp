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
        mp.insert({arr[i],i+1});
    }

    map<int,int>::iterator it;
    it = mp.end();
    it--;
    cout << it->second <<endl;

}

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}