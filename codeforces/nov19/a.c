#include<stdio.h>
int main()
{
	int ctr=0,n,k,a[101],h,i,j,b[10];
	for(i=0;i<=9;i++)
		b[i]=0;
	scanf("%d%d",&n,&k);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(k==0&&a[i]==0)
			ctr++;
		else
		{
			int temp=a[i];
			int flag=0;
			if(a[i]==0)
				b[0]=1;
//			if(temp==0)
//				b[0]=1;
//			else
//			{
			while(temp>0)
			{

				h=temp%10;
//				printf("h--%d\n",h);
				if(h<=k)
					b[h]=1;
				temp=temp/10;
//			}
			}
			for(j=0;j<=9;j++)
			{
				if(b[j]==0&&j<=k)
				{
					flag=1;
				}
			}
			if(flag==0)
				ctr++;
			int l;
			for(l=0;l<=9;l++)
				b[l]=0;
		}
	}
	printf("%d\n",ctr);
	return 0;
}


