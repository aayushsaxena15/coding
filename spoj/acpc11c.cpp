#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int t,n,i;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        sort(a,a+n);
        long long int sum=0;
        for(i=0;i<=n-2;i++)
            sum=sum+a[i];
        printf("%lld\n",sum);
    }
}
