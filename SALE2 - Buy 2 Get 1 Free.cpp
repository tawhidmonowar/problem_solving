#include <iostream>
#define loop(a,b) for(a;a<b;a++)
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int x,n,temp;
        cin >> x >> n;
        temp = x-(x/3);
        cout << temp*n << endl;
    }
    return 0;
}