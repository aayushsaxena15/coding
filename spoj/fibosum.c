#include<stdio.h>
int fib(int n)
{
    int f[n+1];
    int i;

    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }

    return f[n];
}
int main ()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,m,i,ans=0;
        scanf("%lld%lld",&n,&m);
        for(i=n;i<=m;i++)
            ans+=fib(i)%1000000007;
    printf("%lld\n",ans);
    }
    return 0;
}

