#include <iostream>
#include <string>
#define loop(a,b) for(a;a<b;a++)
using namespace std;

int main()
{
    int i,n,x;
    cin >> n >> x;
    string s;
    cin >> s;

    while(x--)
    {
        i=0;
        loop(i,n)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                char temp;
                temp = s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i++;
            }
        }
    }

    cout << s;

    return 0;
}
