#include<stdio.h>
long long int find(long long int A[], long size)
{
	long int largest =A[0],i;

	for(i=1;i<size;i++){
		if(largest < A[i])
			largest = A[i];
	}
	return largest;
}
int main()
{
	long long int j,n,k,a[1000000],i,max=-2000000000;
	scanf("%lld%lld",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(j=0;j<k;j++)
	{
		max=find(a,n);
		for(i=0;i<n;i++)
			a[i]=max-a[i];
	}
	for(i=0;i<n;i++)
		printf("%lld ",a[i]);
	printf("\n");
	return 0;
}

