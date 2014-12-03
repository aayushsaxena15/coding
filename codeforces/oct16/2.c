#include<stdio.h>
int main()
{
    long long int n,m;
    scanf("%lld%lld",&n,&m);
    long long int min=n/m;
    long long int rm=n%m;
    long long int g=(rm*(min+1)*(min))/2;
    long long int h=(m-rm)*(min)*(min-1)/2;



    long long int b=min+rm;
    long long int a1=(((m-1)*(min*(min-1)))/2)+((b*(b-1))/2);
    long long int c=n-(m-1);
    long long int a2=(c*(c-1))/2;
    printf("%lld %lld\n",g+h,a2);
    return 0;
}

