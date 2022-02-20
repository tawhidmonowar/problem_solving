#include <iostream>
using namespace std;

int countDistinct(int arr[], int n)
{
    int res = 1;


    for (int i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;


        if (i == j)
            res++;
    }
    return res;
}


int main()
{
    int i,a;
    cin >> a;
    int arr[a];

    for(i=0; i<a; i++)
    {
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countDistinct(arr, n);
    return 0;
}
