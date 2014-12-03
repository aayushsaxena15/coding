#include<stdio.h>
#include<limits.h>
int main()
{
    int j,n,m,a,b,i,min=INT_MAX;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    for(i=n%m,j=n/m;i<=n;i+=m,j--)
    {
        int t=a*(i)+b*(j);
        if(t<min)
        {
            min=t;
        }
    }
    printf("%d\n",min);
    return 0;
}

