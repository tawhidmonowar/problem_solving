#include <bits/stdc++.h>
#define int long long int
#define endl "\n"
using namespace std;

void solve() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    string temp;
    int result = 0, mul = 0;
    vector<string>vect;

    while(getline(cin, temp)) 
    {
        vect.push_back(temp);
    }

    for(int i = 0; i<vect.size(); i++)
    {
        if (vect[i][0]=='+')
        {
            mul++;
        }
        else if (vect[i][0]=='-')
        {
            mul--;
        }
        else
        {

            string temp = vect[i];
            // cout << temp << endl;
            size_t found = temp.find(':');
            string msg = temp.substr(found+1,temp.length());
           // cout << msg << endl;
            result += msg.length()*mul;
        }
    }

    cout << result << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}