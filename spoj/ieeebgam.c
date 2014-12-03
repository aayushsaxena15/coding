#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double n;
        scanf("%lf",&n);
        printf("%0.8lf\n",n/(n+1));
    }
    return 0;
}
