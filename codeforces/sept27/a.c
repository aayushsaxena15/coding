#include<stdio.h>
int main()
{
	int flag=0,i,a[100000],n,s=0,ctr1=0,ctr2=0,ctr3=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++)
	{
		if(a[i]==25)
			ctr1++;
		else if(a[i]==50)
		{
			if(ctr1==0)
			{
				flag=1;
				break;
			}
			ctr2++;
			ctr1--;
		}

		else
		{

			if(ctr2>=1&&ctr1>=1&&ctr1<3)
			{
				ctr2--;
				ctr1--;
			}
			else if(ctr1>=3&&ctr2==0)
			{
				ctr1-=3;

			}
			else
			{
				flag=1;
				break;
			}
			ctr3++;
		}
	}
	if(flag==1)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}

