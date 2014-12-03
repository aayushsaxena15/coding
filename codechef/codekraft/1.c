#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,n,ctr=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			int temp=i;
			while(temp>0)
			{
				if(temp&1)
					ctr++;
				temp=temp>>1;
			}
		}
		printf("%d\n",ctr);
	}
	return 0;
}

