#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n;
    string str;
    cin >> n;
    cin >> str;

    if(n%4==0)
    {
        long A=n/4,T=n/4,C=n/4,G=n/4;
        for(long i=0; i<n; i++)
        {
            if(str[i]=='A')
            {
                A--;
            }
            else if(str[i]=='T')
            {
                T--;
            }
            else if(str[i]=='C')
            {
                C--;
            }
            else if (str[i]=='G')
            {
                G--;
            }
        }

        string result="";

        for(long i=0; i<n; i++)
        {
            if(str[i]=='?' && A!=0)
            {
                A--;
                result+="A";
            }
            else if(str[i]=='?' && T!=0)
            {
                result+="T";
                T--;
            }
            else if(str[i]=='?' && C!=0)
            {
                result+="C";
                C--;
            }
            else if (str[i]=='?' && G!=0)
            {
                result+="G";
                G--;
            }
            else if (str[i]!='?')
            {
                result+=str[i];
            }
        }

        if(!A&&!T&&!C&&!G)
        {
            cout << result << endl;
        }
        else
        {
            cout << "===" << endl;
        }

    }
    else
    {
        cout << "===" << endl;
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
