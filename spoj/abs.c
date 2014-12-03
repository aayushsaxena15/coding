#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        long long int a[n],s=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0;i<n/2;i++)
        {
            s+=((n-2*i-1)*(a[n-i-1]-a[i]));
        }
        printf("%lld\n",s);
    }
    return 0;
}
