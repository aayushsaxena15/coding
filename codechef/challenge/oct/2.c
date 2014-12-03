#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,a,i,c,ans=0,index=0;
        scanf("%lld",&n);
        scanf("%lld",&c);
        for(i=1;i<n;i++)
        {
            scanf("%lld",&a);
            ans=ans+abs(c);
            c+=a;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
