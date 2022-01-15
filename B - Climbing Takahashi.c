    #include<stdio.h>
     
    int main()
    {
        int i,n,position;
        scanf("%d",&n);
        int x[n+10];
     
        for(i=0;i<n;i++)
        {
            scanf("%d",&x[i]);
        }
     
        position=x[0];
     
        for(i=0;i<n-1;i++)
        {
            if(x[i]<x[i+1])
            {
                position = x[i+1];
     
            }else if(x[i]==x[i+1] || x[i]>x[i+1])
            {
                break;
            }
        }
     
        printf("%d\n",position);
     
        return 0;
    }