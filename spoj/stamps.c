#include<stdio.h>
int main()
{
    int t,ctr=1;
    scanf("%d",&t);
    while(t--)
    {
        int friends,i,j,stamps[1001];
        long int req;
        scanf("%ld %d",&req,&friends);
        for(i=0;i<friends;i++)
        {
            scanf("%d",&stamps[i]);
        }
        for(i=0;i<friends;i++)
        {
            for(j=i+1;j<friends;j++)
            {
                if(stamps[i]<stamps[j])
                {
                    int temp=stamps[i];
                    stamps[i]=stamps[j];
                    stamps[j]=temp;
                }
            }
        }
        long int sum=0;
        printf("Scenario #%d:\n",ctr++);
        for(i=0;i<friends;i++)
        {
            sum+=stamps[i];
            if(sum>=req)
            {
                printf("%d\n",i+1);
                break;
            }
        }
        if(sum<req)
        {
            printf("impossible\n");
        }
    }
    return 0;
}

