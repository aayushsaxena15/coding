#include<stdio.h>
#include<limits.h>
#include<math.h>

inline int maxi(int a,int b)
{
return (a>b?a:b);
}

int main()
{

int t,n,m;

int min,max;

int i,j;

int tmp;

scanf("%d",&t);

while(t--)
{

min=INT_MAX;
max=0;

scanf("%d %d",&n,&m);

for(i=0;i<m;i++)
{
scanf("%d",&tmp);

if(tmp>max)
max=tmp;

if(tmp<min)
min=tmp;

}

for(i=0;i<n;i++)
printf("%d ",maxi(abs(i-min),abs(i-max)));

printf("\n");

}


return 0;
}
