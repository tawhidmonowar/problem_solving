#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x,y,z;
    
    getline(cin,x);
    getline(cin,y);
    getline(cin,z);
    
    int phrasesX=0,phrasesY=0,phrasesZ=0;
    int  i,xLen,yLen,zLen;

    xLen = x.length();
    yLen = y.length();
    zLen = z.length();

    for(i=0; i<xLen; i++)
    {
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i] =='u')
        {
            phrasesX++;
        }
    }

    for(i=0; i<yLen; i++)
    {
        if(y[i]=='a' || y[i]=='e' || y[i]=='i' || y[i]=='o' || y[i] =='u')
        {
            phrasesY++;
        }
    }

    for(i=0; i<zLen; i++)
    {
        if(z[i]=='a' || z[i]=='e' || z[i]=='i' || z[i]=='o' || z[i] =='u')
        {
            phrasesZ++;
        }
    }

    if(phrasesX==5&&phrasesY==7&&phrasesZ==5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
