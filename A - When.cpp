#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int k;
    cin >> k;

    if(k>=60)
    {
        if(k-60<10)
        {
            cout << "22:0" << k-60;
        }
        else
        {
            cout << "22:" << k-60;
        }
    }
    else
    {
        if(k<10)
        {
            cout << "21:0" << k;
        }
        else
        {
            cout << "21:" << k;
        }
    }

    return 0;
}
