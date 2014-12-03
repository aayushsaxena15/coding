#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            long long int min=1010,p,a[1001],d,ans=0;
            int i,j;
            for(i=0;i<n;i++)
            {
                p=1;
                for(j=0;j<3;j++)
                {
                    scanf("%lld",&d);
                    if(min>d)
                    {
                        min=d;
                    }
                    p=p*d;
                }
                a[i]=p;
            }
            min=min*min*min;
            for(i=0;i<n;i++)
            {
                ans=ans+(a[i]/min);
            }
            printf("%lld\n",ans);
        }
    }
    return 0;
}

