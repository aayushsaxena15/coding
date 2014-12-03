#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
        else
           return b;
}
int min(int a,int b)
{
    if(a<b)
        return a;
        else
           return b;
}
int main()
{
    int r,g,b,table=0;
    scanf("%d%d%d",&r,&g,&b);
    while((r+g+b>=3)&&(r+b>0||r+g>0||b+g>0))
    {
        int sum=r+g+b;
        int m=max(r,max(g,b));
        int m2=min(r,min(g,b));
        int max2=sum-m-m2;

        if(m>=2)
        {
            if(m==r) 
            {   r-=2;
                if(max2==g) g--;
                if(max2==b) b--;
            }
            if(m==g)
            {   g-=2;
                if(max2==r) r--;
                if(max2==b) b--;
            }
            if(m==b)
            {   b-=2;
                if(max2==g) g--;
                if(max2==r) r--;
            }
            table++;
        }
        else
        {   r--; g--; b--;
            table++;
        }
    }
    printf("%d\n",table);
return 0;
}


