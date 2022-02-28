#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,n;
    cin >> n;
    string goal[n],teamA,teamB;

    for(i=0; i<n; i++)
    {
        cin >> goal[i];
    }

    teamA = goal[0];

    for(i=0; i<n; i++)
    {
        if(teamA!=goal[i])
        {
            teamB = goal[i];
        }
    }

    int countA=0,countB=0;

    for(i=0; i<n; i++)
    {
        if(teamA==goal[i])
        {
            countA++;
        }
        else
        {
            countB++;
        }
    }

    if(countA>countB)
    {
        cout << teamA;
    }
    else
    {
        cout << teamB;
    }

    return 0;
}
