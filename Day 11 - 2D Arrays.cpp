#include <bits/stdc++.h>
using namespace std;
#define infinity -2147483648

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int i,j,k,aMatrix[10][10];
    int sum=infinity,temp=infinity;

    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin >> aMatrix[i][j];
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            temp=0;
            temp+=aMatrix[i][j];
            temp+=aMatrix[i][j+1];
            temp+=aMatrix[i][j+2];

            temp+=aMatrix[i+2][j];
            temp+=aMatrix[i+2][j+1];
            temp+=aMatrix[i+2][j+2];

            temp+=aMatrix[i+1][j+1];

            if(temp>sum)
            {
                sum=temp;
            }
        }
    }

    cout << sum;

    return 0;
}
