#include<stdio.h>
int main()
{
    int a[6]={4,2,3,5,1,7},i,j;
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(a[i]>a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<6;i++)
        printf("%d ",a[i]);
     return 0;
}
