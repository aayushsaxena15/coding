#include<stdio.h>
#include<math.h>
int main()
{
	int n,l,m=0,i,a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	char f[100];
	scanf("%s",f);
	for(i=0;f[i]!='\0';i++)
	{
		
		m=m+(pow(2,i)*(f[i]-'0'));
	}
	int temp,s=0,max=0;
	for(i=0;i<=m;i++)
	{
		s=0;
		temp=i;
		int ctr=-1;
		while(temp>0)
		{
			ctr++;
			if(temp&1)
			{
				s=s+a[ctr];
			}
			temp=temp>>1;
		}
		if(s>max)
			max=s;
	}
	printf("%d\n",max);
	return 0;
}

