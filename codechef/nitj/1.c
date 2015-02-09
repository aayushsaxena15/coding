#include<stdio.h>
long long int fact (long long int a)
{
    if(a==0)
        return 1;
    else
        return a*fact(a-1);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k;
        scanf("%lld%lld",&n,&k);
        long long int a=fact(n)%1000000007;
        long long int c=fact(n-k)%1000000007;
        printf("%lld\n",(a/c)%1000000007);
    }
    return 0;
}
