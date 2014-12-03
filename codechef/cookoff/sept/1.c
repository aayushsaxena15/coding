#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i,j;
        char g[1000][1000];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%c",&g[i][j]);
            }
        }
        
        

