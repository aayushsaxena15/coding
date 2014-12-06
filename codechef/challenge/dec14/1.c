#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a[100001],i,b,ctr=0;
        scanf("%d",&n);
        for(i=0;i<=100000;i++)
            a[i]=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&b);
            a[b]=1;
        }
        for(i=0;i<=100000;i++)
            if(a[i]==1)
                ctr++;


        printf("%d\n",ctr);
    }
    return 0;
}

