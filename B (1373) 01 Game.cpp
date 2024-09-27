#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve(int test_case)
{
    string str;
    cin >> str;
    int alice=0,bob=0;

    string temp = str;
    string p1 = "01", p2="10";

    for (int i = 0; i < str.length(); ++i)
    {
        size_t found_p1 = temp.find(p1);
        size_t found_p2 = temp.find(p2);

        if (i%2==0)
        {
            if (found_p1 != string::npos)
            {
                temp.erase(found_p1,2);
            }
            else if (found_p2 != string::npos)
            {
                temp.erase(found_p2,2);
            }
            else
            {
                cout << "NET" << endl;
                return;
            }
        }
        else
        {
            if (found_p1 != string::npos)
            {
                temp.erase(found_p1,2);
            }
            else if (found_p2 != string::npos)
            {
                temp.erase(found_p2,2);
            }
            else
            {
                cout << "DA" << endl;
                return;
            }
        }
    }

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