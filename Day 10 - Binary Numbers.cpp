#include <iostream>
#include <string>
#include <vector>
#define loop(a,b) for(a;a<b;a++)
using namespace std;

int help(int x)
{
    vector<int>binary;
    int temp=0,oneCount=0;

    while(x>0)
    {
        binary.push_back(x%2);
        x=x/2;
    }

    int i=0;
    loop(i,binary.size())
    {

        if(binary[i]==1)
        {
            temp++;
        }
        else
        {
            temp=0;
        }

        if(temp>oneCount)
        {
            oneCount=temp;
        }
    }

    return oneCount;
}

int main()
{
    int x;
    cin >> x;
    cout << help(x);
    return 0;
}
