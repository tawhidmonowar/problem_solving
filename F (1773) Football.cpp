#include <bits/stdc++.h>
#define long long long
#define endl "\n"
using namespace std;

void solve()
{
    long n,x,y,res=0;
    cin >>n>>x>>y;
    vector<string>vect;

    for(long i=0; i<n-1; i++)
    {
        if(x<y && x>0)
        {
            vect.push_back("1:0");
            x--;
        }
        else if (y>0)
        {
            vect.push_back("0:1");
            y--;
        }
        else if(x>0 && y==0)
        {
            vect.push_back("1:0");
            x--;
        }
        else
        {
            vect.push_back("0:0");
        }
    }

    stringstream ss;
    ss<<x;
    string temp,s;
    ss >> s;
    temp+=s;
    temp.push_back(':');
    ss.clear();
    ss<<y;
    ss >> s;
    temp+=s;
    vect.push_back(temp);


    for(long i=0; i<n; i++)
    {
        long pos = vect[i].find(":");
        string subSecond = vect[i].substr(pos + 1);
        string subFirst = vect[i].substr(0 , pos);

        if(subFirst==subSecond)
        {
            res++;
        }
    }

    cout << res << endl;

    for(long i=0; i<n; i++)
    {
        cout << vect[i] << endl;
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
