#include<stdio.h>
int main()
{
	int a,b,time=0,j,k,used=0;
	scanf("%d%d",&a,&b);
	while(a>=b)
	{
		time+=a;
		a=a/b;
		used=used+(a%b);
		if(used>=b)
		{
			time=time+(used/b);
			used=used%b;
			
		}
	}
	printf("%d\n",time+a);
	return 0;
}

