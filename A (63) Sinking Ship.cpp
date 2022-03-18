#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int i,j,n;
    cin >> n;
    string x,y;
    vector <string> vs;

    for(i=0; i<=n; i++)
    {
        getline(cin,x);
        vs.push_back(x);
    }

    //rat

    for(i=1; i<=n; i++)
    {
        y=vs[i];
        int yLen;
        yLen = y.length();

        if(y[yLen-1]=='t'&&y[yLen-2]=='a'&&y[yLen-3]=='r')
        {
            j=0;
            while(y[j]!=' ')
            {
                cout << y[j];
                j++;
            }
            cout << endl;
        }
    }

    //woman or children

    for(i=1; i<=n; i++)
    {
        y=vs[i];
        int yLen;
        yLen = y.length();

        if((y[yLen-1]=='n'&&y[yLen-2]=='a'&&y[yLen-3]=='m'&&y[yLen-4]=='o'&&y[yLen-5]=='w')||(y[yLen-1]=='d'&&y[yLen-2]=='l'&&y[yLen-3]=='i'&&y[yLen-4]=='h'&&y[yLen-5]=='c'))
        {
            j=0;
            while(y[j]!=' ')
            {
                cout << y[j];
                j++;
            }
            cout << endl;
        }
    }

    //man

    for(i=1; i<=n; i++)
    {
        y=vs[i];
        int yLen;
        yLen = y.length();

        if(y[yLen-1]=='n'&&y[yLen-2]=='a'&&y[yLen-3]=='m'&&y[yLen-4]==' ')
        {
            j=0;
            while(y[j]!=' ')
            {
                cout << y[j];
                j++;
            }
            cout << endl;
        }
    }

    //captain

    for(i=1; i<=n; i++)
    {
        y=vs[i];
        int yLen;
        yLen = y.length();

        if(y[yLen-1]=='n'&&y[yLen-2]=='i'&&y[yLen-3]=='a'&&y[yLen-4]=='t'&&y[yLen-5]=='p'&&y[yLen-6]=='a'&&y[yLen-7]=='c')
        {
            j=0;
            while(y[j]!=' ')
            {
                cout << y[j];
                j++;
            }
            cout << endl;
        }
    }

    return 0;
}
