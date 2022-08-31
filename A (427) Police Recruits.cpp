#include bitsstdc++.h
using namespace std;

void solve()
{
    int n,police=0,crime=0,res=0;
    cin  n;
    int arr[n];

    for(int i=0; in; i++)
    {
        cin  arr[i];
    }

    for(int i=0; in; i++)
    {
        if(arr[i]0)
        {
            police+=arr[i];
        }
        else
        {
            crime+=abs(arr[i]);
        }

        if(police==0 && crime0)
        {
            res++;
            crime--;
        }
        else if(police0 && crime0)
        {
            police--;
            crime--;
        }

    }

    cout  res  endl;

}

int main()
{
    solve();
    return 0;
}
