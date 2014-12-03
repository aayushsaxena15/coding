#include<stdio.h>
int main()
{
	int n,m,i,t=0,ans=1,a[100];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	i=0;
	while(i<n)
	{
		if((a[i]+t)>m)
		{
			t=a[i];
			ans++;
		}
		else
			t+=a[i];
		i++;
	}
	printf("%d\n",ans);
	return 0;
}

