#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long x,y,temp;
    cin >> x >>y;
    temp = x*y;

    if(temp%2)
    {
        cout << "Odd";
    }
    else
    {
        cout << "Even";
    }

    return 0;
}
