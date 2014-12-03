#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int n,m,sx,sy,i,j,a[21][21],dp[21][21];
    scanf("%d%d%d%d",&n,&m,&sx,&sy);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=sx+1;i<=n;i++)
    {
        a[i][sy]=a[i-1][sy]-a[i][sy];
    }
    for(i=sy+1;i<=m;i++)
    {
        a[sx][i]=a[sx][i-1]-a[sx][i];
    }
    for(i=sx+1;i<=n;i++)
    {
        for(j=sy+1;j<=m;j++)
        {
            int a1=a[i-1][j]-a[i][j];
            int b1=a[i][j-1]-a[i][j];
            int m=max(a1,b1);
            a[i][j]=m;
        }
    }
    if(a[n][m]>=0)
        printf("Y %d\n",a[n][m]);
    else
        printf("N\n");
    return 0;
}

