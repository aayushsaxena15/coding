#include<stdio.h>
#include<string.h>
int min(int a,int b)
{
	if(a<b)
		return a;
	else
		return b;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[10001],b[10001];
		int ans=0,flag1[123],flag2[123],i,j,l1,l2;
		scanf("%s",a);
		char c=getchar();
		scanf("%s",b);
		l1=strlen(a);
		l2=strlen(b);
		for(i=0;i<123;i++)
		{
			flag1[i]=0;
			flag2[i]=0;
		}
		for(i=0;i<l1;i++)
			flag1[a[i]]++;
		for(i=0;i<l2;i++)
			flag2[b[i]]++;
		for(i=0;i<123;i++)
		{
			ans+=min(flag1[i],flag2[i]);
		}
		printf("%d\n",ans);
	}
	return 0;
}

