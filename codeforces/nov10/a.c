#include<stdio.h>
int min(int x,int y)
{
	if(x<y)
		return x;
	else
		return y;
}
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int i,j,a,b,s1=0,s2=0,z[100][100],o,p;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			z[i][j]=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(o=0;o<j;o++)
				s1=s1+z[i][o];
			for(p=0;p<i;p++)
				s2=s2+z[p][j];
//			printf("s1--%d s2--%d\n",s1,s2);
			a=k-s1;
			b=k-s2;
			s1=0;
			s2=0;
			int temp=min(a,b);
//			s1=s1+temp;
			z[i][j]=temp;

			printf("%d ",temp);
		}
		printf("\n");
	}
	return 0;
}
