#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double s,ans,d,e,f;
        scanf("%lf%lf%lf",&d,&e,&f);
        s=(d+e+f)/2;
        ans=(((d*d*sqrt(3))/4)+((e*e*sqrt(3))/4)+((f*f*sqrt(3))/4)+(3*sqrt(s*(s-d)*(s-e)*(s-f))))/2;
        printf("%0.2lf\n",ans);
    }
    return 0;
}

