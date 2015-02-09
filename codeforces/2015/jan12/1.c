#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else return b;
}
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int a1=(3*a)/10;
    int a2=a-a/250*c;
    int a3=3*b/10;
    int a4=b-b/250*d;
    int m1=max(a1,a2);
    int m2=max(a3,a4);
    if(m1>m2)
        printf("Misha\n");
    else if(m2>m1)
        printf("Vasya\n");
        else printf("Tie\n");
    return 0;
}
