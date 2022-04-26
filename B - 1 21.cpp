#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long i,a,b,temp_int;
    cin >>a>>b;

    string x,y,temp_str;
    x=to_string(a);
    y=to_string(b);
    temp_str=x+y;
    temp_int=stoi(temp_str);

    for(i=1;i<temp_int;i++)
    {
        if((i*i)==temp_int)
        {
            cout << "Yes";
            break;
        }
        else if((i*i)>temp_int)
        {
            cout << "No";
            break;
        }
    }

    return 0;
}
