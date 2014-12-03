#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if(x>0&&y>0)
		printf("0 %d %d 0\n",x+y,x+y);
	else if(x<0&&y>0)
	{
		x=-x;
		printf("%d 0 0 %d\n",-x-y,x+y);
	}
	else if(x<0&&y<0)
	{
		x=-x;
		y=-y;
		printf("%d 0 0 %d\n",-x-y,-x-y);
	}
	else
	{
		y=-y;
		printf("0 %d %d 0\n",-x-y,x+y);
	}
		return 0;
}
