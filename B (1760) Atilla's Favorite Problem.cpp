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

    sort(str.begin(), str.end());

    cout << (int)str[n-1]-96 << endl;

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
