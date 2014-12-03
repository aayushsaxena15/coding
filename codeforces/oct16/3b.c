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
    int r,g,b;
    scanf("%d%d%d",&r,&g,&b);
    int m2=min(r,min(g,b)),table=0;
      if(m2==r) {   r=0; g-=r; b-=r;    }
      if(m2==g) {   g=0; r-=g; b-=g;    }
      if(m2==b) {   b=0; g-=b; r-=b;    }
      table=m2;
    while((r+g+b>=3)&&(r+b>0||r+g>0||b+g>0))
    {
        int sum=r+g+b;
        int m=max(r,max(g,b));
        int max2=sum-m;

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


