#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve(long test_case)
{
    long a,b,c;
    cin >>a>>b>>c;

    for(long i=0; i<5; i++)
    {
        if(a<=b && a<=c)
        {
            a++;
        }
        else if(b<=a && b<=c)
        {
            b++;
        }
        else if(c<=a && c<=b)
        {
            c++;
        }
    }

    cout << a*b*c << endl;
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
