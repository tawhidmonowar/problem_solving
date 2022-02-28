#include <iostream>
#include <string>
#define loop(a,b) for (a;a<b;a++)
using namespace std;

int main()
{
    int n,i=0,faces=0;
    cin >> n;
    string figures[n];

    loop(i,n)
    {
        cin >> figures[i];
    }
    i=0;
    loop(i,n)
    {
        if(figures[i]=="Tetrahedron")
        {
            faces+=4;
        }
        else if(figures[i]=="Cube")
        {
            faces+=6;
        }
        else if(figures[i]=="Octahedron")
        {
            faces+=8;
        }
        else if(figures[i]=="Dodecahedron")
        {
            faces+=12;
        }
        else
        {
            faces+=20;
        }
    }

    cout << faces;

    return 0;
}
