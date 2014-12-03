#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double a,h,V,s;
        scanf("%lf",&V);
        a=cbrt(4*V);
        h=(4*V)/(sqrt(3)*a*a);
        s=(sqrt(3)/2*a*a)+(3*a*h);
        printf("%0.10lf\n",s);
    }
    return 0;
}
