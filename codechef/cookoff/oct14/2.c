#include<stdio.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,n,m,p[100001];
        scanf("%d%d",&n,&m);
        for(i=0;i<m;i++)
            scanf("%d",&p[i]);
        int max=-1,min=INT_MAX;
        for(i=0;i<m;i++)
        {
            if(p[i]>max)
                max=p[i];

            if(min>p[i])
                min=p[i];

        }
        
        int m1[100001],m2[100001],j=1;
        for(i=min-1;i>=0;i--)
            m1[i]=j++;
        j=1;
        for(i=min+1;i<n;i++)
            m1[i]=j++;
        j=1;
        for(i=max-1;i>=0;i--)
            m2[i]=j++;
        j=1;
        for(i=max+1;i<n;i++)
            m2[i]=j++;
        int ctr=0;
        for(i=0;i<n;i++)
        {   
            
            if(m1[i]>m2[i])
            {
                printf("%d ",m1[i]);
            }
            else
            {
                printf("%d ",m2[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
