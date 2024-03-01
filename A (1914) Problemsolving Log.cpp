#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve(long test_case)
{
    long n,res=0;
    cin >> n;
    string str;
    cin >> str;

    map<char,long>mp;

    for(long i=0; i<n; i++)
    {
        mp[str[i]]++;
    }

    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        if((int)it->first-64<=it->second)
        {
            res++;
        }
    }

    cout << res << endl;

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
