#include <iostream>
#include <deque>
#define loop(a,b) for (a;a<b;a++)
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        int i=0,n,temp=2;
        deque <int> junk;
        cin >> n;
        junk.push_back(2);

        while(temp<n)
        {
            if(junk[i]==1)
            {
                junk.push_back(2);
                temp+=2;
                i++;
            }
            else
            {
                junk.push_back(1);
                temp+=1;
                i++;
            }
        }

        int sum=0;

        i=0;
        loop(i,junk.size())
        {
            sum+=junk[i];
        }

        if(sum!=n)
        {
            junk.pop_front();
            junk.push_back(1);
        }

        i=0;
        loop(i,junk.size())
        {
            cout << junk[i];
        }

        cout << "\n";
    }

    return 0;
}