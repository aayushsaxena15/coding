#include<stdio.h>
int main()
{
	int m,r;
	scanf("%d%d",&m,&r);
	int i;
	for(i=0;i<m*m;i++)
	{
		int v=(i/m)+1;
		int u=m+1+(i%m);
