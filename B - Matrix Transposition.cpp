#include <iostream>
using namespace std;

int main()
{
    int h,w;
    cin >> h >> w;

    int a[h][w], b[h][w],i,j;

    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            cin >> a[i][j];
        }
    }

    for(i=0;i<w;i++)
    {
        for(j=0;j<h;j++)
        {
            cout << a[j][i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
