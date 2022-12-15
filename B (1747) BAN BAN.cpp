#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n,temp;
    cin >> n;

    if(n%2==0)
    {
        long l=1,r=n*3;
        temp = (n/2);
        cout << temp << endl;
        do
        {
            cout << l << " " << r << endl;
            l+=3;
            r-=3;
        }
        while (l<r);
    }
    else
    {
        long l=1,r=n*3;
        temp = (n/2)+1;
        cout << temp << endl;
        do
        {
            cout << l << " " << r << endl;
            l+=3;
            r-=3;
        }
        while (l<r);

    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}


/**

3
BAN BAN BAN
NAN BAN BAB -> 1
NAN NAB BAB -> 2

1 9
4 6


ajman hussain
mursedul alom


4
BAN BAN BAN BAN
NAN BAN BAN BAB -> 1
NAN NAN BAB BAB -> 2

1 12
4 9


**/