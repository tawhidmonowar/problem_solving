#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    int n;
    cin >> n;

    if(x=="ABC" && n<=1999)
    {
        cout << "YES";
    }
    else if (x=="ARC" && n<=2799)
    {
        cout << "YES";
    }
    else if (x=="AGC" && n>=1200)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
