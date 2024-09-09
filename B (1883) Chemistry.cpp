#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve(long test_case)
{
    long n,k;
    cin >> n >> k;
    string str;
    cin >> str;
    map<char,long> mp;

    for(auto c:str)
    {
        mp[c]++;
    }

    bool odd = false;

    for(auto c:str)
    {
        if(!odd && mp[c]%2!=0)
        {
            odd = true;
        }
        else if(odd && k!=0 && mp[c]%2!=0)
        {
            k--;
            mp[c]--;
        }
    }

    odd = false;

    for(auto it:mp)
    {
        if(!odd && it.second%2!=0)
        {
            odd = true;
        }
        else if(odd && k==0 && it.second%2!=0)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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
