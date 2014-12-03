#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,n,m,t;
    scanf("%d",&t);
    double u,v,w,U,V,W,Volume,a,b=12;
    while(t--)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&u,&v,&w,&W,&V,&U);
        a=4*(pow(u,2)*pow(v,2)*pow(w,2)) - pow(u,2)*pow((pow(v,2)+pow(w,2)-pow(U,2)),2) - pow(v,2)*pow((pow(w,2)+pow(u,2)-pow(V,2)),2) - pow(w,2)*pow((pow(u,2)+pow(v,2)-pow(W,2)),2) + (pow(v,2)+pow(w,2)-pow(U,2))*(pow(w,2)+pow(u,2)-pow(V,2))*(pow(u,2)+pow(v,2)-pow(W,2));
        Volume=sqrt(a);
        Volume/=b;
        printf("%.4lf\n",Volume);

    }
    return 0;
}
