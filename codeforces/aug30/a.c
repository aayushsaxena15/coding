#include<stdio.h>
int main()
{
    int flag=0,n,s,min=100,max,a[100],b[100],i,j;
    scanf("%d%d",&n,&s);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        if(a[i]<s&&b[i]>0&&b[i]<min)
        {
            min=b[i];
            flag=1;
        }
        else if(a[i]<=s)
        
            flag=1;
        

    }
    if(flag==0)
    {
        printf("-1\n");
    }
    else
        printf("%d\n",100-min);
    return 0;

}


