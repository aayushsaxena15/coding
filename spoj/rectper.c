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
    int i,s=0,n,a[1000],b[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    int dp[n][2];

    dp[0][0] = a[0];
    dp[0][1] = b[0];

    for(i = 1;i < n;++i)
    {
        dp[i][0] = a[i] + max(dp[i-1][0] + abs(b[i] - b[i-1]), dp[i-1][1] + abs(b[i] - a[i-1]));
        dp[i][1] = b[i] + max(dp[i-1][0] + abs(a[i] - b[i-1]), dp[i-1][1] + abs(a[i] - a[i-1]));
    }

    printf("%d\n",max(dp[n-1][0], dp[n-1][1]));
    return 0;
}


