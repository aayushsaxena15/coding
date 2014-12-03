#include<stdio.h>
int main()
{
    int n,a[100000],b[100000],i,j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((a[i]<a[j]&&b[i]>b[j])||(a[j]>a[i]&&b[i]>b[j]))
            {
                flag=1;
            }
            if(flag==1)
                break;
        }
        if(flag==1)
            break;
    }
    if(flag==1)
        printf("Happy Alex\n");
    else
        printf("Poor Alex\n");
    return 0;
}

