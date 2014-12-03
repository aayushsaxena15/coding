#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i,ctr=0;
        scanf("%lld",&n);
        for(i=5;n/i>0;i=i*5)
            ctr=ctr+(n/i);
        printf("%lld\n",ctr);
    }
    return 0;
}
