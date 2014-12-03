#include<stdio.h>
int main()
{
	int n,k,a[1000000],index=1,s=0,ctr=0,min=10000001,i,j;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		s=s+a[i];
		ctr++;
		if(ctr==k)
		{
			printf("%d\n",s);
			ctr--;
			if(s<min)
			{
				min=s;
				index=i-k+1;
			}
			printf("index---%d\n",index);
			s=s-a[index];
		}
	}
	printf("%d\n",index);
	return 0;
}

