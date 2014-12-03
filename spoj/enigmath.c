#include<stdio.h>
int gcd(int a , int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main()
{
    int t,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        int g=gcd(a,b);
        printf("%d %d\n",b/g,a/g);
    }
    return 0;
}
  
