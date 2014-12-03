#include<stdio.h>
int main()
{
    int k,hash[1001],ctr=0,p,q,l,r,n,i,za[51],zb[51],xa[51],xb[51],j;
    scanf("%d%d%d%d",&p,&q,&l,&r);
    for(i=0;i<=1000;i++)
        hash[i]=0;
    for(i=1;i<=p;i++)
    {
        scanf("%d%d",&za[i],&zb[i]);
        for(j=za[i];j<=zb[i];j++)
            hash[j]=1;
    }
    for(i=1;i<=q;i++)
    {
        scanf("%d%d",&xa[i],&xb[i]);
    }
    for(i=l;i<=r;i++)
    {
        int f=0;
        for(j=1;j<=q;j++)
        {
            for(k=xa[j];k<=xb[j];k++)
            {
                if((k+i<=1000)&&hash[k+i]==1)
                {
                    f=1;
                    ctr++;
                    break;
                }
            }
            if(f==1)
                break;
        }
    }
    printf("%d\n",ctr);
    return 0;
}

