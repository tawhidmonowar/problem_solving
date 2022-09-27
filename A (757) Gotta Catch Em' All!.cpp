#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    map<char,int>mp;

    for(int i=0; i<str.length(); i++)
    {
        mp[str[i]]++;
    }

    int temp = mp['a'];
    mp['a']=temp/2;
    temp = mp['u'];
    mp['u']=temp/2;

    cout << min(min(min(mp['l'],mp['b']),min(mp['a'],mp['s'])),min(min(mp['B'],mp['u']),mp['r']));

}

int main()
{
    solve();
    return 0;
}
