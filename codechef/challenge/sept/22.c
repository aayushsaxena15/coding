#include<stdio.h>
int main()
{
    int l=0,n,m,i,j,d,a[100001];
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
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

                printf("%d\n",a[(d+l+n)%n]);
        }
        else if(c=='A')
        {
            l+=d;
            l=l%n;
            if(l<0)
                l+=n;
        }
        else
        {
            d=-1*d;
            l+=d;
            l=l%n;
            if(l<0)
                l+=n;
        }


    }
    return 0;
}
