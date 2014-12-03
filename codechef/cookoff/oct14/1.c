#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int i,s=0,n;
        scanf("%lld",&n);

         printf("%lld\n",(((n+1)*n)/2)+n);
    }
    return 0;
}

