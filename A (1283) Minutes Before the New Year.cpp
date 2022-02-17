#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int h,m,leftM;
    cin >> h >> m;

    leftM = (23-h)*60+(60-m);

    cout << leftM << endl;

    }

    return 0;
}
