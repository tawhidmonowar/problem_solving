#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

bool checkBeautiful (long m[2][2])
{
    if(m[0][0] < m[0][1] && m[1][0] < m[1][1] && m[0][0] < m[1][0] && m[0][1]<m[1][1])
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(long test_case)
{
    long m[2][2];
    cin >> m[0][0] >> m[0][1] >> m[1][0] >> m[1][1];

    for(long i=0; i<5; i++)
    {
        if(checkBeautiful(m))
        {
            cout << "YES" << endl;
            return;
        }
        else
        {
            long temp;
            temp=m[0][0];
            m[0][0]=m[1][0];
            m[1][0]=m[1][1];
            m[1][1]=m[0][1];
            m[0][1]=temp;
        }
    }

    cout << "NO" << endl;

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
