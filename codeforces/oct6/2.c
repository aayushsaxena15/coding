#include<stdio.h>
int main()
{
    int i,m,mole[1000001],j,n,a[1001],s=0,fin[1000001];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
        fin[i]=s;
    }
    
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        scanf("%d",&mole[i]);
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(fin[j]>=mole[i])
            {
                printf("%d\n",j);
                break;
            }
        }
    }
    return 0;
}




