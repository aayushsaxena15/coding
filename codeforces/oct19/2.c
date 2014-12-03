#include<stdio.h>
#include<limits.h>
int main()
{
    int maxindex,minindex,s=0,n,k,a[1001],i,j,l=0,glomin,mx[1001],mn[1001],max=0,min=INT_MAX;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        s+=a[i];
    }
    if(s%n==0)
        glomin=0;
    else
        glomin=1;
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(max<a[j])
            {
                max=a[j];
                maxindex=j;
            }
            if(min>a[j])
            {
                min=a[j];
                minindex=j;
            }
        }
        mx[l]=maxindex;
        mn[l++]=minindex;
        a[maxindex]--;
        a[minindex]++;
        min++;
        max--;

        for(j=1;j<=n;j++)
        {
            if(max<a[j])
            {
                max=a[j];
            }
            if(min>a[j])
            {
                min=a[j];
            }
        }

        if((max-min)==glomin)
        {
           // a[maxindex]++;
           // a[minindex]--;
            //l--;
            break;
        }
    }
    printf("%d %d\n",max-min,l);
    for(i=0;i<l;i++)
        printf("%d %d\n",mx[i],mn[i]);
    return 0;
}
