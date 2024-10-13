#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    string str;
    cin >> str;
    stack<pair<char, int>> lowercase, uppercase;

    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i]=='b' and !lowercase.empty())
        {
            lowercase.pop();
        }
        else if (str[i]=='B' and !uppercase.empty())
        {
            uppercase.pop();
        }
        else if (str[i] < 'a' and str[i] != 'B')
        {
            uppercase.push(make_pair(str[i],i));
        }
        else if (str[i] > 'Z' and str[i] != 'b')
        {
            lowercase.push(make_pair(str[i],i));
        }
    }

    map<int, char> mp;
    int ups = uppercase.size();
    for (int i = 0; i < ups; ++i)
    {
        mp[uppercase.top().second] = uppercase.top().first;
        uppercase.pop();
    }

    int lws = lowercase.size();
    for (int i = 0; i < lws; ++i)
    {
        mp[lowercase.top().second] = lowercase.top().first;
        lowercase.pop();
    }

    for(auto x:mp)
    {
        cout << x.second;
    }
    cout << endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int testCase;
    cin >> testCase;
    int test_case = testCase;

    while(testCase--)
    {
        solve(test_case-testCase);
    }

    return 0;
}