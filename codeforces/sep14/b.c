#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a+b+c)%2==1)
		printf("Impossible\n");
	else
	{
		int t=(a+b+c)/2;
		int x=t-a,y=t-b,z=t-c;
		if(x<0||y<0||z<0)
			printf("Impossible\n");
		else
			printf("%d %d %d\n",z,x,y);
	}
	return 0;
}

