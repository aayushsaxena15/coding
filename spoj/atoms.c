#include<stdio.h>
#include<math.h>
int main()
{
    int p;
    scanf("%d",&p);
    while(p--)
    {
        long long int n,k,m;
        scanf("%lld%lld%lld",&n,&k,&m);
        if(m<=n)
            printf("0\n");
        else
        {
        float ans=log(m/n)/log(k);
        printf("%d\n",(int)ans);
        }
    }
    return 0;
}
