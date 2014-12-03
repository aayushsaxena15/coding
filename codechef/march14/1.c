#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int ans,n,i,a[100000],temp;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		temp=a[0];
		ans=temp;
		temp--;

		for(i=1;i<n;i++)
		{
			if(temp<a[i])
			{
//				temp=a[i];
				ans=ans+a[i]-temp;
				printf("%d\n",ans);
			}
			else
			ans--;
			printf("ii  %d temp  %d  ans %d\n",i,temp,ans);
		}
		printf("%d\n",ans);
	}
	return 0;
}
			


