#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,a,s=0,i;
        scanf("%d%d",&n,&m);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            s+=a;
        }
        if((s+m)%n==0)
            printf("Yes\n");
         else
             printf("No\n");
    }
    return 0;
}

