#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalLimes,totalDrink;

    totalLimes = c*d;
    totalDrink = (k*l)/nl;

    int result;
    result = min(min(totalDrink,totalLimes),p/np)/n;

    cout << result;

    return 0;
}
