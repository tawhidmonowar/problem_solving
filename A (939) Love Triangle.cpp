#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int lv1,lv2,lv3;

    for(int i=0; i<n; i++)
    {
        int temp=arr[i];
        lv1=arr[temp-1];
        lv2=arr[lv1-1];
        lv3=arr[lv2-1];

        if(temp==lv3 && lv1!=lv2 && lv1!=lv3 && lv2!=lv3)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;

}

int main()
{
    solve();
    return 0;
}
