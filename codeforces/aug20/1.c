#include<stdio.h>
int main()
{
    int ans=0,n,m,i,j,temp;
    scanf("%d%d",&n,&m);
    while(n>0)
    {
        ans+=n;
        n=(n/m);
    }
    printf("%d\n",ans);
    return 0;
}
