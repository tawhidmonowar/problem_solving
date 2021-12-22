#include<stdio.h>

void quickSort(int A[], int low, int high)
{
    int partitionIndex;

    if (low < high)
    {
        partitionIndex = partition(A, low, high);
        quickSort(A, low, partitionIndex - 1);
        quickSort(A, partitionIndex + 1, high);
    }
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while(A[i] <= pivot)
        {
            i++;
        }

        while(A[j] > pivot)
        {
            j--;
        }

        if(i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    while (i < j);

    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

int main()
{
    int position,temp,i,j,arraySize,sumTemp=0,testCase;

    scanf("%d",&testCase);

    while(testCase--)
    {
        scanf("%d",&arraySize);
        int arrayMain[arraySize];

        for(i=0; i<arraySize; i++)
        {
            scanf("%d",&arrayMain[i]);
        }

        quickSort(arrayMain, 0, arraySize-1);

        for(i=0; i<arraySize; i++)
        {
            sumTemp+=arrayMain[i];
        }

        sumTemp = sumTemp-arrayMain[0];
        printf("%d\n",sumTemp);
        sumTemp = 0;

    }

    return 0;
}