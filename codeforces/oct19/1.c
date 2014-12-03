#include<stdio.h>
int min(int a,int b)
{
    if(a>b)
        return a;
        else return b;
}
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int a1=a+b+c,a2=a*b*c,a3=(a+b)*c,a4=a*(b+c),a5=a+(b*c),a6=(a*b)+c;
    int ans=min(a1,min(a2,min(a3,min(a4,min(a5,a6)))));

    printf("%d\n",ans);
    return 0;
}


