#include <bits/stdc++.h>
#define long long long
#define endl "\n"

using namespace std;

void solve(long test_case)
{
    long n;
    cin >> n;
    vector<long> arr(n);

    for(long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    string result(n, '0');
    long count = 0;

    for(long i = n-1; i >= 0; i--)
    {
        count = max(count, arr[i]);
        if(count > 0)
        {
            result[i] = '1';
            count--;
        }
    }

    for(long i = 0; i < n; i++)
    {
        cout << result[i] << " ";
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
