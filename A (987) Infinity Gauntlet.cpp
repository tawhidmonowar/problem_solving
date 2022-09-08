#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    map<string,string>mp;
    mp.insert({"purple","Power"});
    mp.insert({"green","Time"});
    mp.insert({"blue","Space"});
    mp.insert({"orange","Soul"});
    mp.insert({"red","Reality"});
    mp.insert({"yellow","Mind"});

    for(int i=0; i<n; i++)
    {
        string temp;
        cin >> temp;
        mp.erase(temp);
    }

    cout << 6-n << endl;

    for(auto x:mp)
    {
        cout << x.second <<endl;
    }

}

int main()
{
    solve();
    return 0;
}
