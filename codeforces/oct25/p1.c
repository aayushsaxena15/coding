#include<stdio.h>
int flag[1000001];
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,a[1000],f=0;
	for(i=0;i<1000001;i++)
		flag[1000001]=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		flag[a[i]]=1;
		if((i-1>=0)&&(a[i]>a[i-1]))
		{
			for(j=a[i-1]+1;j<a[i];j++)
			{
				if(flag[j]==1)
				{
					f=1;
				}
			}
		}
		else if((i-1>=0)&&(a[i]<a[i-1]))
		{
			for(j=a[i]+1;j<a[i-1];j++)
			{
				if(flag[j]==1)
				{
					f=1;
				}
			}
		}
	}
	if(f==0)
		printf("no\n");
	else
		printf("yes\n");
	return 0;
}

