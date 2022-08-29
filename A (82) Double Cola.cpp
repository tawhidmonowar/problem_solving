#include <bits/stdc++.h>
#define FastRead ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
/*Author: TawhidMonowar*/
typedef long long int ll;
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int res = 1;

    while(res*5<n)
    {
        n-=res*5;
        res*= 2;
    }

    string names[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << names[(n-1)/res] << endl;

}

int main()
{
    FastRead
    solve();

    return 0;
}
