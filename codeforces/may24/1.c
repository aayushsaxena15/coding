#include<stdio.h>
int main()
{
	int t=0,flag=0,n,a[100],i,temp1=0,temp2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		t+=a[i];
		if(a[i]==100)
			temp1++;
		else
			temp2++;
	}
	if(temp1%2==0&&temp2%2==0)
		flag=1;

	if(temp2%2==1&&temp1%2==0)
		flag=1;
	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}


