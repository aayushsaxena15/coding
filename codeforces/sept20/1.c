#include<stdio.h>
int main()
{
    int flag[101],c=0,n,p,q,i,a;
    scanf("%d%d",&n,&p);
    for(i=1;i<=n;i++)
    {
        flag[i]=0;
    }
    for(i=1;i<=p;i++)
    {
        scanf("%d",&a);
        flag[a]=1;
    }
    scanf("%d",&q);
    for(i=1;i<=q;i++)
    {
        scanf("%d",&a);
        flag[a]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(flag[i]==0)
            c=1;
    }
    if(c==1)
    {
        printf("Oh, my keyboard!\n");
    }
    else
        printf("I become the guy.\n");
        return 0;
}

