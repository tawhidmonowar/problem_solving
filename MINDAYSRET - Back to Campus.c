#includestdio.h

int main()
{
    int i,testCase,n,k;
    scanf(%d,&testCase);

    for(i=0; itestCase; i++)
    {
        scanf(%d%d,&n,&k);
        if(n%k==0)
        {
            printf(%dn,nk);
        }
        else
        {
            printf(%dn,(nk)+1);
        }
    }

    return 0;
}
