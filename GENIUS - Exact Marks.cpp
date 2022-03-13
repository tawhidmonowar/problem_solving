#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n,x,total;
        int correct,incorrect,unattempted;
        cin >> n >> x;

        if(x%3==0)
        {
            correct = x/3;
            incorrect=0;
            unattempted=n-(correct+incorrect);
        }
        else if(x%3==1)
        {
            correct = (x/3)+1;
            incorrect = 2;
            unattempted = n-(correct+incorrect);

        }
        else if(x%3==2)
        {
            correct = (x/3)+1;
            incorrect =1;
            unattempted = n-(correct+incorrect);
        }

        total = correct+incorrect;

        if (total<=n)
        {
            cout << "Yes\n" << correct << " " << incorrect << " " << unattempted << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}