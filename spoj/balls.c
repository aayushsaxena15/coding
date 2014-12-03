#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int w,b;
        scanf("%d%d",&w,&b);
        int temp=b%10;
        if(b%2==0)
            printf("0.000000\n");
        else
            printf("1.000000\n");
    }
    return 0;
}
