#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    stack <char> stck;
    string str;
    long n, res=0;
    cin >> n >> str;

    for(long i=str.size()-1; i>=0; i--)
    {
        if(str[i]==')')
        {
            stck.push(')');
        }
        else if(!stck.empty() && str[i]=='(')
        {
            stck.pop();
        }
        else
        {
            res++;
        }
    }

    cout << res << endl;
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

/**



**/