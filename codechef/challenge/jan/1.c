#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k,a[100001],b[100001],max=0,i;
        scanf("%lld%lld",&n,&k);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(i=0;i<n;i++)
            scanf("%lld",&b[i]);
        long long int g;
        for(i=0;i<n;i++)
        {
            long long int temp=k/a[i];
            g=temp*b[i];
            if(max<g)
                max=g;
        }
        printf("%lld\n",max);
    }
    return 0;
}

