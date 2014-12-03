#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int flag=0,n,inner[1001],outer[1001],i,index;
        scanf("%d",&n);
        int max=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d%d",&inner[i],&outer[i]);
            if(inner[i]>max)
             { 
                  max=inner[i];
                  index=i;
             }
        }
        for(i=1;i<=n;i++)
        {
            if(i!=index&&outer[i]>=max)
                flag=1;
        }
        if(flag==1)
            printf("-1\n");
        else
            printf("%d\n",index);
    }
        return 0;
}
