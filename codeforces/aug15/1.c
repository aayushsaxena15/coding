#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,i,j,k,x3,y3,x4,y4;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if((y2-y1)==(x2-x1))
    {
        x3=x2;
        y3=y1;
        x4=x1;
        y4=y2;
        printf("%d %d %d %d\n",x3,y3,x4,y4);
    }
    else if(y1==y2)
    {
        x3=x1;
        y3=y1+x2-x1;
        x4=x2;
        y4=y2+x2-x1;
        printf("%d %d %d %d\n",x3,y3,x4,y4);
    }
    else if(x1==x2)
    {
        x3=x1+y2-y1;
        y3=y1;
        x4=x2+y2-y1;
        y4=y2;
        printf("%d %d %d %d\n",x3,y3,x4,y4);
    }
    else
        printf("-1\n");
    return 0;
}


