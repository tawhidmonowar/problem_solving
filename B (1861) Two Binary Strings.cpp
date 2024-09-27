#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    string str1, str2;
    cin >> str1 >> str2;
    int zero=0,one=str1.length()-1;

    for (int i = 0; i < str1.length(); ++i)
    {
        if (str1[i]=='0' and str2[i]=='0' and str1[i+1]=='1' and str2[i+1]=='1')
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;

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