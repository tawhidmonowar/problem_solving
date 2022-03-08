#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x,y,temp;
    cin >> x >> y;

    string fractions[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    temp = max(x,y);
    cout << fractions[temp];

    return 0;
}
