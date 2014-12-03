#include<stdio.h>
int flag=0,a[3001],i;

void check(int x)
{
	if(x>1)
	{
		int in=0;
		for(i=1;i<=3000;i++)
		{
			if(a[i]==x-1)
				in=1;
		}
		if(in==0)
		{
			check(x-1);
		}
	}
	if(x>2)
	{
		int in=0;
		for(i=1;i<=3000;i++)
		{
			if(a[i]==x-2)
				in=1;
		}
		if(in==0)
		{	
			check(x-2);
		}
	}
	if(x>3)
	{
		int in=0;
		for(i=1;i<=3000;i++)
		{
			if(a[i]==x-3)
				in=1;
		}
		if(in==0)
		{
			check(x-3);
		}
	}
	if(x==1)
		flag=1;



}
int main()
{
	int n,m,i,s;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		a[i]==0;
	for(i=1;i<=m;i++)
	{
		scanf("%d",&s);
		a[i]=s;
	}
	for(i=1;i<=3000;i++)
	if(a[i]==1||a[i]==n)
	{
		printf("NO\n");
		return 0;
	}
		check(n);
	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}



