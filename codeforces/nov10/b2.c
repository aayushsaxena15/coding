#include<stdio.h>
int main()
{
	int i,n,k,a[10000];
	scanf("%d%d",&n,&k);
	if(n==k)
		printf("-1\n");
	else 
	{
		for(i=1;i<=n;i++)
			a[i]=i;
		int j=1;
		for(i=1;i<=n-k;i++)
		{
			int temp=a[j];
			a[j]=a[(j+i)%(n+1)];
			a[(i+j)%(n+1)]=temp;
			j=(i+j)%(n+1);
		}
		for(i=1;i<=n;i++)

			printf("%d ",i);
	}
return 0;
}


