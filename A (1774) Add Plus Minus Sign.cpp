#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve(long test_case)
{
    long n;
    cin >> n;
    string str;
    cin >> str;

    long res=0;
    if(str[0]=='1')
    {
        res+=1;
    }

    for(long i=1; i<n; i++)
    {
        if(str[i]=='1')
        {
            res+=1;
        }

        if(res>1)
        {
            cout << '-';
            res=0;
        }
        else
        {
            cout << '+';
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
