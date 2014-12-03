#include<stdio.h>
#include<string.h>
int main()
{
	int a,b,c,d;
	char s[100000],i,j;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	scanf("%s",s);
	int l=strlen(s),ans=0;
	for(i=0;i<l;i++)
	{
		if(s[i]=='1')
			ans+=a;
		else if(s[i]=='2')
			ans+=b;
		else if(s[i]=='3')
			ans+=c;
		else if(s[i]=='4')
			ans+=d;
	}
	printf("%d\n",ans);
	return 0;
}

