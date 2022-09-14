#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int pearl=0,link=0;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='o')
        {
            pearl++;
        }
        else
        {
            link++;
        }
    }

    if(pearl==0 || link%pearl==0 || link==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}

int main()
{
    solve();
    return 0;
}
