#include<stdio.h>
int main()
{
    int l=0,n,m,i,j,d,a[100001];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    char c;
    for(i=1;i<=m;i++)
    {
        char e=getchar();
        scanf("%c",&c);
        e=getchar();
        scanf("%d",&d);
        if(c=='R')
        {
                d=d-1;
                printf("%d\n",a[(d+l+n)%n]);
        }
        else 
        {
            d=(c=='A')?(-1 * d):d;
            l=(l+d)%n;
            if(l<0)
                l+=n;
        }
    }
    return 0;
}
