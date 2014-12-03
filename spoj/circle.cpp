#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        long long int l[n],sum=0;
        for(i=0;i<n;i++)
            scanf("%lld",&l[i]);
        sort(l,l+n);
        for(i=0;i<=n-2;i++)
            sum=sum+l[i];
        printf("%lld\n",sum);
       }
}
