#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >>a>>b>>c;

    if(a>b)
    {
        cout << "Takahashi" << endl;
    }else if(b>a)
    {
        cout << "Aoki" << endl;
    }else if (a==b && c==0)
    {
        cout << "Aoki" << endl;
    }else if (a==b && c==1)
    {
        cout << "Takahashi" << endl;
    }

    return 0;
}
