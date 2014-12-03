#include<stdio.h>
int main()
{
    int t,m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        int a[101][101],b[101][101],i,j;
        long long int c[101][101],sum=0,temp=0,max=0;
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&b[i][j]);
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%lld",&c[i][j]);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                b[i][j]=(a[i][j]<b[i][j]?a[i][j]:b[i][j]);
                c[i][j]*=b[i][j];
            }
        }
        for(i=0;i<m;i++)
        {
            temp=0;
            for(j=0;j<n;j++)
                temp=(c[i][j]<temp?temp:c[i][j]);
            sum+=temp;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
