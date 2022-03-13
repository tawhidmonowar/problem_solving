#include <iostream>
using namespace std;

int main()
{
    int d1,d2,d3;
    cin >> d1 >> d2 >> d3;
    int temp1,temp2,temp3,temp4;

    temp1=(d1*2)+(d2*2);
    temp2=d1+d2+d3;
    temp3=(d1*2)+(d3*2);
    temp4=(d2*2)+(d3*2);

    cout << min(min(min(temp1,temp2),temp3),temp4);

    return 0;
}
