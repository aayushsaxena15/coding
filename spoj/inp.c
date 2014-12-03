#include<stdio.h>
#include<math.h>
int ans(int n)
{
    if(n==3||n==4)
        return 3;
    else if(n==5)
        return 4;

    else
    {
        int temp=ceil((float)n/2.0);
        return 1+ans(temp);
    }
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",ans(n));
    }
    return 0;
}
