#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,one=0,two=0,three=0,four=0,res=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]==1)
        {
            one++;
        }
        else if(arr[i]==2)
        {
            two++;
        }
        else if(arr[i]==3)
        {
            three++;
        }
        else
        {
            four++;
        }
    }

    res+=four;

    if(three==one)
    {
        res+=three;
        three=0;
        one=0;
    }
    else if(three>one)
    {
        res+=one;
        three-=one;
        one=0;
    }
    else if(three<one)
    {
        res+=three;
        one-=three;
        three=0;
    }

    if(two%2==0)
    {
        res+=two/2;
        two=0;
    }
    else
    {
        two--;
        res+=two/2 ;
        two=1;
    }

    if(one==1 && two==1)
    {
        res++;
        one--;
        two=0;
    }
    else if(one>=2 && two==1)
    {
        res++;
        one-=2;
        two=0;
    }


    res+=ceil((float)one/4);
    res+=three;
    res+=two;
    cout << res << endl;

}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    solve();

    return 0;
}