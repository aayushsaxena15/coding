#include<stdio.h>
int main()
{
	int j,k,i;
	char a[17],c;
	scanf("%d",&k);
	int temp=k;
	for(i=0;i<16;i++)
	{
		scanf("%c",&a[i]);
		if(i==3||i==7||i==11||i==15)
			c=getchar();
	}
	int ctr[11],flag=0;
	for(i=0;i<10;i++)
		ctr[i]=0;
	for(i=0;i<16;i++)
			ctr[a[i]-'0']++;
	for(i=1;i<10;i++)
	{
		if((2*temp)<ctr[i])
		{
			flag=1;
		}
	}
	if(flag==1)
		printf("NO\n");
	else
		printf("YES\n");

	return 0;
}
