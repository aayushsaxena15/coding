#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j;
	char a[100][100];
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	char f[1000];
	scanf("%s",f);
	for(j=0;f[j]!='\0';j++)
	{
		if(f[j]<97||f[j]>122)
			f[j]='\0';
	}
	int k,fl=0;
	for(k=0;k<i;k++)
		if(strcmp(a[k],f)!=0)
			fl=1;
	if(fl==1)
		printf("no\n");
	else
		printf("yes\n");
	return 0;
}



