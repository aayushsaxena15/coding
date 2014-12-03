#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        printf("%lld\n",(2*n+(n*(n-1)*3)/2)%1000007);
    }
    return 0;
}
