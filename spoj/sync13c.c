#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int c1,c2;
        scanf("%d%d",&c1,&c2);
        if(c1%2!=0&&c2%2!=0)
            printf("Ramesh\n");
        else
            printf("Suresh\n");
    }
    return 0;
}

