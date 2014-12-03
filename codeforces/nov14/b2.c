#include<stdio.h>
int flag=0,a[3000];

void check(int x)
{
	if(x>1)
	{
		if(a[x-1]==0)
		{
			check(x-1);
		}
	}
	if(x>2)
	{
		if(a[x-2]==0)
		{	
			check(x-2);
		}
	}
	if(x>3)
	{
		if(a[x-3]==0)
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
		a[s]=1;
	}
	if(a[1]==1||a[n]==1)
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



