#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int chest=0,biceps=0,back=0;

    for(int i=0; i<n; i+=3)
    {
        chest+=arr[i];
    }

    for(int i=1; i<n; i+=3)
    {
        biceps+=arr[i];
    }

    for(int i=2; i<n; i+=3)
    {
        back+=arr[i];
    }

    if(chest>=biceps && chest>=back)
    {
        cout << "chest" << endl;
    }
    else if(biceps>=chest && biceps>=back)
    {
        cout << "biceps" << endl;
    }
    else if(back>=biceps && back>=chest)
    {
        cout << "back" << endl;
    }
}

int main()
{
    solve();
    return 0;
}
