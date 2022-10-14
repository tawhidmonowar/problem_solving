#include <bits/stdc++.h>
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve()
{
    int n,res=0;
    cin >> n;
    while(n!=0)
    {
        res++;
        n=n/2;
    }
    cout << (1<<(res-1))-1 << endl;
}

int main()
{
    FastRead
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        solve();
    }

    return 0;
}
