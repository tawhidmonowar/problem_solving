#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int a,b,c;
        cin >>a>>b>>c;

        if(a+b<c||a+c<b||c+b<a)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
