#include<stdio.h>
int main()
{
	int n,i,p=0,c,cr=0,ans=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&c);
		if(c==-1&&p==0)
			ans++;
		if(c==-1&&p>0)
			p--;
		else
		{
			p=p+c;
		}
	}
	printf("%d\n",ans);
	return 0;
}


