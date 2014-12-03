#include<stdio.h>
int main()
{
	int n,min=100000,a,i,f=0,index;
	scanf("%d",&n);
	for(i=1;i<10;i++)
	{
		scanf("%d",&a);
		if(a<min)
		{
			min=a;
			index=i;
		}
		if(a>=n)
			f=1;
	}
	int c=n/min;
	int r=n%min;
	if(f==0||n==0)
		printf("-1\n");
	else
	{
	for(i=0;i<c;i++)
		printf("%d",index);
	printf("\n");
	}
	return 0;
}
