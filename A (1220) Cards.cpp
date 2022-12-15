#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long x;
    cin >> x;
    string str,res="";
    cin >> str;

    long o=0,n=0,e=0,z=0,r=0;

    for(long i=0; i<x; i++)
    {
        if(str[i]=='o')
        {
            o++;
        }
        else if(str[i]=='n')
        {
            n++;
        }
        else if(str[i]=='e')
        {
            e++;
        }
        else if(str[i]=='z')
        {
            z++;
        }
        else if(str[i]=='r')
        {
            r++;
        }

        if(o>=1 && n>=1 && e>=1)
        {
            res+='1';
            o--;
            n--;
            e--;
        }
        else if(z>=1 && e>=1 && r>=1 && o>=1)
        {
            res+='0';
            z--;
            e--;
            r--;
            o--;
        }

    }

    sort(res.begin(),res.end());

    for(long i=res.length()-1; i>=0; i--)
    {
        cout << res[i] << " ";
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