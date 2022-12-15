#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve(long test_case)
{
    long n;
    cin >> n;

    if(n>10 && n<=100)
    {
        cout << floor(n/10)+9<< endl;
    }
    else if(n>100 && n<=1000)
    {
        cout << floor(n/100)+18 << endl;
    }
    else if(n>1000 && n<=10000)
    {
        cout << floor(n/1000)+27 << endl;
    }
    else if(n>10000 && n<=100000)
    {
        cout << floor(n/10000)+36 << endl;
    }
    else if(n>100000 && n<=10000000)
    {
        cout << floor(n/100000)+45 << endl;
    }
    else
    {
        cout << n << endl;
    }
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