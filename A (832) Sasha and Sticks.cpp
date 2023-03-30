#include <bits/stdc++.h>
using namespace std;


int main ()
{
    long long n,k,res;

    while (cin >> n >> k)
    {
        res = n/k;

        if (res & 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}