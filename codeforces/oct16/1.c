#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int ans=a+b+c+d+e;
    if((ans%5!=0)||(a==0&&b==0&&c==0&&d==0&&e==0))
        printf("-1\n");
    else
        printf("%d\n",ans/5);
    return 0;
}

