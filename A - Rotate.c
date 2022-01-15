    #include<stdio.h>
    #include<string.h>
     
    int main()
    {
        long int i,x,y,z;
        char s[1000],s2[1000],s3[1000];
     
        scanf("%s",s);
        x=atoi(s);
     
        s2[0]=s[1];
        s2[1]=s[2];
        s2[2]=s[0];
        s2[3]='\0';
     
        y=atoi(s2);
     
        s3[0]=s[2];
        s3[1]=s[0];
        s3[2]=s[1];
        s3[3]='\0';
     
        z=atoi(s3);
     
        printf("%d\n",x+y+z);
     
        return 0;
    }