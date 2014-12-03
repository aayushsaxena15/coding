#include<stdio.h>
int main()
{
    int n,a[100000],i,s=0,ans,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    s=-a[0];
    for(i=0;i<n-1;i++)
    {
        s=s+a[i]-a[i+1];
    }

    printf("%d\n",abs(s));
    return 0;
}
