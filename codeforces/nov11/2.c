#include<stdio.h>
int main()
{
    int k,m,n,i,j,a[101][101],b[101][101];
    scanf("%d%d",&m,&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            a[i][j]=-1;
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&b[i][j]);
            if(b[i][j]==0)
            {
                for(k=1;k<=n;k++)
                {
                    a[i][k]=0;
                }
                for(k=1;k<=m;k++)
                {
                    a[k][j]=0;
                }
            }
        }
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==-1)
                a[i][j]=1;
        }
    }
    int flag=0;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            int ans=0;

            for(k=1;k<=n;k++)
            {
                if(a[i][k]==1)
                {
                    ans=1;
                    break;
                }
            }
            for(k=1;k<=m;k++)
            {
                if(a[k][j]==1)
                {
                    ans=1;
                    break;
                }
            }
            if(ans!=b[i][j])
            {
                flag=1;
                break;
            }

        }
        if(flag==1)
            break;
    }
    if(flag==1)
        printf("NO\n");
    else
    {
        printf("YES\n");

        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}


