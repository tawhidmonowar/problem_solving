#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int i,n,x,maxPeople=0,temp;
        cin >> n >> x;
        int y[n];

        for(i=0; i<n; i++)
        {
            cin >> y[i];
        }

        temp=x;
        maxPeople=x;

        for(i=0; i<n; i++)
        {
            temp+=y[i];
            if(temp>maxPeople)
            {
                maxPeople=temp;
            }
        }

        cout << maxPeople << endl;

    }

    return 0;
}
