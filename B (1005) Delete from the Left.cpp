#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    string str, tstr;
    cin >> str >> tstr;
    long i=0,j=0;

    for(i=str.length()-1, j = tstr.length()-1; i>=0 && j>=0; j--,i--)
    {

        if(str[i]==tstr[j])
        {
            continue;
        }
        else
        {
            break;

        }
    }

    cout << i+j+2 << endl;

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();

    return 0;
}