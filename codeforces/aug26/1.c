#include<stdio.h>
int main()
{
    int n;
    char a[101][101];
    int i,j,k,l,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {

        // for(j=1;j<=n;j++)
        // {
        scanf("%s",a[i]);
        // }
        char ch=getchar();
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {   int ctr=0;
            if(a[i][j+1]=='o'&&j+1<n)
            {
                ctr++;

            }
            if(a[i][j-1]=='o'&&j-1>=0)
            {   ctr++;

            }
            if(a[i-1][j]=='o'&&i-1>=0)
            {  ctr++;

            }
            if(a[i+1][j]=='o'&&i+1<n)
            { ctr++;

            }
            if(ctr%2==1)
                flag=1;
        }
    }
    if(flag==1)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}
