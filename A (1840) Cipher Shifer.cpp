#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    char temp = str[0];
    string result = "";
    result.push_back(temp);
    bool push = false;

    for (int i = 1; i < n; ++i)
    {
        if (push)   
        {
            result.push_back(str[i]);
            push = false;
            temp = str[i];
            continue;
        }
        if (str[i]==temp)
        {
            push = true;
        }
    }

    cout << result << endl;
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