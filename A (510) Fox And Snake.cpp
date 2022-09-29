#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int r,c;
    cin >>r>>c;
    bool temp = false;

    for(int i=1; i<=r; i++)
    {
        int garbage = -1;
        for(int j=1; j<=c; j++)
        {
            if(!(i%2))
            {
                if(j==c && !temp &&i!=garbage)
                {
                    cout << "#";
                    temp = true;
                }
                else if(j==1 && temp)
                {
                    cout << "#";
                    temp = false;
                    garbage=i;
                }
                else
                {
                    cout << ".";
                }
            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;
    }

}

int main()
{
    solve();
    return 0;
}
