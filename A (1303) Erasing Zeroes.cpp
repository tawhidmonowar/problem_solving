#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve(long test_case)
{
    string str;
    cin >> str;

    long l=-1,r=-1;

    for(long i=0; i<str.length(); i++)
    {
        if(str[i]=='1')
        {
            l=i;
            break;
        }
    }

    for(long i=str.length()-1; i>=0; i--)
    {
        if(str[i]=='1')
        {
            r=i;
            break;
        }
    }

    long res=0;

    for(long i=l; i<=r; i++)
    {
        if(str[i]=='0')
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
 