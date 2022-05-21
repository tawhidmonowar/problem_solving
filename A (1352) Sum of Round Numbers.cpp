#include <bits/stdc++.h>
using namespace std;
int itr=1;
vector <string> vecStr;

string repZero(int n,string x)
{
    int i;
    for(i=n;i<x.length();i++)
    {
        x[i]='0';
    }
    return x;
}

void recString(string x)
{
    int i=0,j=0,xLen;
    xLen = x.length();
    bool stop = false;
    string temp;

    for(i=1;i<xLen;i++)
    {
        if(x[i]!='0')
        {
            temp = x.substr(i,xLen);
            x = repZero(i,x);
            stop=true;
            break;
        }
        else
        {
            stop=false;
        }
    }

    vecStr.push_back(x);

    if(stop==true)
    {
        itr++;
        recString(temp);
    }
    else
    {
        cout << itr <<endl;
        for(auto i=vecStr.begin();i<vecStr.end();i++)
        {
            cout << *i <<" ";
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int testCase;
    cin >> testCase;

    while(testCase--)
    {
        string x;
        cin >> x;
        recString(x);
        cout << endl;
        vecStr.clear();
        itr = 1;
    }

    return 0;
}
