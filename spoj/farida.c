#include<stdio.h>
long long int max(long long int a,long long int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int t,ctr=1;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        long long a[1001],and[1001];
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        and[0]=a[0];
        and[1]=max(and[0],a[1]);
        for(i=2;i<n;i++)
        {
            and[i]=max(and[i-1],a[i]+and[i-2]);
        }

        printf("Case %d: %lld\n",ctr++,and[n-1]);
    }
    return 0;
}
