#include<stdio.h>
int main()
{
    int ans=0,n,m,k,i,a[1002];
    scanf("%d%d%d",&n,&m,&k);
    for(i=1;i<=m+1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=m;i++)
    {
        int temp1=a[i];
        int temp2=a[m+1];
        int max,min;
        if(temp1>temp2)
            {
                max=temp1;
                min=temp2;
            }
            else
            {
                max=temp2;
                min=temp1;
            }
        int ctr=0;
        while(max!=0)
        {
//            printf("t1  %d  t2  %d\n",temp1,temp2);
            if((max&1)!=(min&1))
            {
                ctr++;
            }
            max=max>>1;
            min=min>>1;
        }
        if(ctr<=k)
            ans++;
    }
       printf("%d\n",ans);
    return 0;
}
