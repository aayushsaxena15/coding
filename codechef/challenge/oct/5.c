#include<stdio.h>
int main()
{
    int n,a[2001][2];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i][0],&a[i][1]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            int tempx=a[i][0],tempy=a[i][1];
            


