#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n,res=0;
    cin >> n;
    char current;
    cin >> current;
    string str;
    cin >> str;

    for(long i=0; i<n; i++)
    {
        if(str[i]=='g')
        {
            str.push_back('g');
            break;
        }
        else
        {
            str.push_back(str[i]);
        }
    }

    for(long i=0; i<str.length(); i++)
    {
        if(str[i]==current)
        {
            for(long j=i; j<str.length(); j++)
            {
                if(str[j]=='g')
                {
                    if(res<j-i)
                    {
                        res=j-i;
                    }
                    i=j;
                    break;
                }
            }
        }
    }

    cout << res << endl;

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