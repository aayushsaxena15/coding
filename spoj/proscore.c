#include<stdio.h>
int main()
{
    int t,a=1;
    scanf("%d",&t);
    while(t--)
    {
        int s,n,p,i,j,f1=1,f2=1,f3=1,ctr[11],prob[10];
        scanf("%d%d",&n,&p);
        for(i=0;i<10;i++)
        {
                prob[i]=0;
                ctr[i]=0;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<p;j++)
            {
                scanf("%d",&s);
                if(s==1)
                {
                    prob[j]=1;
                    ctr[i]++;
                }
            }
        }
        for(i=0;i<p;i++)
        {
            if(prob[i]!=1)
            {
                f1=0;
                break;
            }
        }
        for(i=0;i<n;i++)
        {
            if(ctr[i]==0)
            {
                    f2=0;
                    break;
            }
        }
        for(i=0;i<n;i++)
        {
            if(ctr[i]>=p)
            {
                f3=0;
                break;
            }
        }
        printf("Case %d: %d\n",a++,(f1*4)+(f2*2)+f3);
    }
    return 0;
}
