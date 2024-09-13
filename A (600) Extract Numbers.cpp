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

bool isNumber (string s)
{
    if (s == "") return false;
    if (s == "0") return true;
    if (!('1'<=s[0] && s[0] <= '9')) return false;
    for (auto c : s) {
        if (!('0' <= c && c <= '9')) return false;
    }
    return true;
}

void solve()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    string str;
    cin >> str;

    for (auto & c : str) {
        if (c == ';') c = ',';
    }

    str.push_back(',');

    vector <string> vect,a,b;
    int left = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i]==',')
        {
            vect.push_back(str.substr(left,i-left));
            left=i+1;
        }
    }
    a.push_back("\"");
    b.push_back("\"");




    for(auto x: vect) 
    {
        // cout << x << endl;
        if (isNumber(x))
        {
            a.push_back(x);
            a.push_back(",");
        }
        else
        {
            b.push_back(x);
            b.push_back(",");
        }
    }

    a.pop_back();
    a.push_back("\"");
    b.pop_back();
    b.push_back("\"");
    
    if (a.size()==1)
    {
        cout << "-";
    }
    else
    {
        for(auto x: a)
        {
            cout << x << "";
        }
    }
 
    cout  << endl;
 
    if (b.size()==1)
    {
        cout << "-";
    }
    else
    {
        for(auto x: b)
        {
            cout << x << "";
        }
    }

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}