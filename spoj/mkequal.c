#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int ctr=0,n,a[100000],i,j;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            ctr+=a[i];
        }
        if(ctr%n==0)
            printf("%d\n",n);
            else
                printf("%d\n",n-1);
    }
    return 0;
}
