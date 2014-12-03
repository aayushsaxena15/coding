#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,temp,j,k;
	temp=n;
	int t=n;
	int ctr=0;
	if(n==0)
		printf("O-|-OOOO\n");
	else
	{
	while(temp!=0)
	{
		temp=temp/10;
		ctr++;
	}
	for(i=0;i<ctr;i++)
	{
		int h=t%10;
		t=t/10;
		if(h<5)
		{
			printf("O-|");
			for(k=1;k<=h;k++)
				printf("O");
			if(k<=5)
				printf("-");
			for(k=h+2;k<=5;k++)
				printf("O");
			printf("\n");
		}
		else
		{
			printf("-O|");
			for(k=1;k<=h-5;k++)
				printf("O");
			if(k<=5)
				printf("-");
			for(k=h-3;k<=5;k++)
				printf("O");
			printf("\n");
		}
	}
	}
		return 0;
	}



