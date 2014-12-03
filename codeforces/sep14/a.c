#include<stdio.h>
int main()
{
	int ctr=1,n,i,flag;
	char a[100000][2];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(i=1;i<n;i++)
	{
		if(a[i][0]==a[i-1][1])
			ctr++;
	}
	printf("%d\n",ctr);
	return 0;
}

		
