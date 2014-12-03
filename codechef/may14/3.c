#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[1000000];
		int i,j,l,ctr=0,index=0;
		scanf("%s",a);
		l=strlen(a);
		if(a[0]!='<')
			ctr=0;
		else
		{
			for(i=0;i<l;i++)
			{
				if(a[i]=='<')
					index++;
				else if(a[i]=='>')
				{
					if(index>0)
					{
						index--;
						ctr++;
					}
				}
			}
		}
		printf("%d\n",ctr*2);
	}
	return 0;
}

