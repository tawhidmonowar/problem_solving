#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int i,n;
    cin >> n;
    stack<string>st;

    for(i=0; i<n; i++)
    {
        string str;
        cin >> str;

        if(str=="Sleep")
        {
            string str2;
            cin >> str2;
            st.push(str2);
        }
        else if(str=="Test")
        {
            if(st.size()==0)
            {
                cout << "Not in a dream" << endl;
            }
            else
            {
                cout << st.top() << endl;
            }
        }
        else if(str=="Kick" && st.size()!=0)
        {
            st.pop();
        }
    }
}

int main()
{
    solve();

    return 0;
}
