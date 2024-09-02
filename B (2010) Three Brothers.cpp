#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long a,b;
    cin >> a >> b;
    string str = "";
    str+= to_string(a);
    str+= to_string(b);

    size_t old = str.find('1');
    size_t mid = str.find('2');
    size_t young = str.find('3');


    if (old == string::npos)
    {
        cout << "1" << endl;
    }

    if (mid == string::npos)
    {
        cout << "2" << endl;
    }

    if (young == string::npos) {
        cout << "3" << endl;
    }




}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
