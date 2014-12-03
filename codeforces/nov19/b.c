#include<stdio.h>
int main()
{
	int n,i,a[100001],j;
	scanf("%d",&n);
	int max;
	int ctr;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	if(n==1)
		max=1;
	else if(n==2)
		max=2;
	else
	{
		max=2;
		ctr=2;
		for(i=2;i<n;i++)
		{
			if(a[i]==a[i-1]+a[i-2])
			{
				ctr++;
			}
			else
				ctr=2;
			if(ctr>max)
				max=ctr;
		}
	}
	printf("%d\n",max);
	return 0;
}
