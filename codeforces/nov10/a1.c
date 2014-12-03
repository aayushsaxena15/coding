#include<stdio.h>
int main()
{
	int i,j,n,k;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				printf("%d ",k);
			else
				printf("0 ");
		}
		printf("\n");
	}
	return 0;
}
