#include<stdio.h>
int main()
{
	int max=0,n,i,a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(max<a[i])
			max=a[i];
	}
	int ctr=0;
	for(i=0;i<n;i++)
		if(a[i]==max)
			ctr++;
	if(ctr>1)
		printf("%d\n",n-ctr+1);
	else
		printf("%d\n",n);
	return 0;

	

}
