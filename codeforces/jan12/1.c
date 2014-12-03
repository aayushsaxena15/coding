#include<stdio.h>
int main()
{
	int s1=0,s2=0,n,i,a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	i=0;
	int j=n-1,ctr=0;
	while(ctr<n)
	{
		if(ctr%2==0)
		{
			if(a[i]>a[j])
			{
				s1+=a[i];
				i++;
			}
			else if(a[i]<=a[j])
			{
				s1+=a[j];
				j--;
			}
		}
		else
		{
			if(a[i]>a[j])
			{
				s2+=a[i];
				i++;
			}
			else if(a[i]<=a[j])
			{
				s2+=a[j];
				j--;
			}
		}
		ctr++;
	}
	printf("%d %d\n",s1,s2);
	return 0;
}

