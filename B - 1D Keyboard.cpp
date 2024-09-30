#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

#define debug(...) _f (#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void _f (const char* name, Arg1&& arg1)
{
    cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void _f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | ";
    _f (comma + 1, args...);
}

void solve()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    string str;
    cin >> str;

    char start_ch = 'A';
    size_t start = str.find(start_ch);
    int distaance = 0;

    for (int i = 0; i < 25; ++i)
    {
        start_ch++;
        size_t temp = str.find(start_ch);
        distaance += abs((int)start-(int)temp);
       // debug(start_ch,temp,start,distaance);

        start = temp;
    }

    cout << distaance << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}