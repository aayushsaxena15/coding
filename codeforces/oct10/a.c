#include<stdio.h>
int main()
{
	int su=0,sl=0,n,i,j,a[100],b[100],flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		sl=sl+b[i];
		su=su+a[i];
	}
	if((sl%2)==1&&(su%2)==1)
	{
		for(i=0;i<n;i++)
		{
			flag=1;
			if((a[i]%2+b[i]%2)==1)
			{
				printf("1\n");
				return 0;
			}
		}
	}
	else if((sl%2==0)&&(su%2==0))
	{
		printf("0\n");
		return 0;
	}
	else 
		printf("-1\n");
	if( flag==1)
		printf("-1\n");
	return 0;
}


