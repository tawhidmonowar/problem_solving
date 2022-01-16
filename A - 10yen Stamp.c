    #include <stdio.h>
     
    int main()
    {
        int i,x,y,Xyen=10,count=0;
     
        scanf("%d%d",&x,&y);
     
        for(i=x; x<y; i++)
        {
            if(x<=y)
            {
                x+=10;
                count++;
            }
        }
     
        printf("%d",count);
     
        return 0;
    }