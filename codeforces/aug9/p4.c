#include<stdio.h>
int main()
{
	int n,m,g;
	scanf("%d%d%d",&n,&m,&g);
	if(n==0&&m==0)
		printf("0\n");
	else if(n>0&&m==0)
		printf("1\n");
	else if(n==0&&m>0)
		printf("1\n");
	else 
	{
		if(n+m==1)
			printf("0\n");
		else 
		{
			if(g==0)
