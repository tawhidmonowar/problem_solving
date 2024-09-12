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

    int n;
    cin >> n;


    for (int i = 0; i < n; ++i)
    {
        int l,r,k;
        cin >> l >> r >> k;

        if (str.length()>1)
        {
            string sub_str = str.substr(l-1,(r-l)+1);
            str.erase(l-1,(r-l)+1);

            if(k>=1)
            {
                while(k!=0)
                {
                    if (k>sub_str.length())
                    {
                        k-=sub_str.length();
                        rotate(sub_str.begin(), sub_str.begin() + (sub_str.size() - sub_str.length()), sub_str.end());

                    }
                    else
                    {
                        //rotate(sub_str.begin(), sub_str.begin() + k, sub_str.end());
                        rotate(sub_str.begin(), sub_str.begin() + (sub_str.size() - k), sub_str.end());
                        //str.insert(l-1,sub_str);
                       //debug(sub_str,str);
                        k=0;
                        break;
                    }

                    //debug(sub_str,temp);
                }
            }
            else
            {
                reverse(sub_str.begin(),sub_str.end());
            }

            str.insert(l-1,sub_str);
        }
        
        //debug(l,r,k);
        
    }

    cout << str << endl;

}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}