#include<stdio.h>
typedef struct pair
{
    int an,index;
}pair;
int main()
{
    int n,k,i,j;
    pair p[103];
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&p[i].an);
        p[i].index=i;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(p[i].an<p[j].an)
            {
                int t=p[i].an;
                int t2=p[i].index;
                p[i].an=p[j].an;
                p[i].index=p[j].index;
                p[j].an=t;
                p[j].index=t2;
            }
        }
    }
    int ans[102],ctr=0,s=0;
    for(i=1;i<=n;i++)
    {
        if(s+p[i].an<=k)
        {
            s+=p[i].an;
            ctr++;
        }
    }
    printf("%d\n",ctr);
    for( i=1;i<=ctr;i++)
        printf("%d ",p[i].index);
     printf("\n");

    return 0;
}
