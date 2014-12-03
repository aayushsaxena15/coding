#include<stdio.h>
int main()
{
    int i,n,p,q,a=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&p,&q);
        if(p+2<=q)
            a++;
    }
    printf("%d\n",a);
    return 0;
}


