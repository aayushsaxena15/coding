#include<stdio.h>
int main()
{
    int h,w;
    while(1)
    {
        int i,j;
        char a[51][51];
        scanf("%d%d",&h,&w);
        if(h==0&&w==0)
            break;
        else
        {
            for(i=1;i<=h;i++)
            {
                for(j=1;j<=w;j++)
                    scanf("%c",&a[h][w]);
                char ch=getchar();
            }
            for(i=1;i<=h;i++)
                for(j=1;j<=w;j++)
                    printf("%c ",a[h][w]);

        }
    }
    return 0;
}
