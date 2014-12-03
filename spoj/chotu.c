#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double x,y;
        scanf("%lf%lf",&x,&y);
        printf("%.3lf\n",2*sqrt(x*x-y*y));
    }
    return 0;
}
