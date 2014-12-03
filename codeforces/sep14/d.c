#include<stdio.h>
#include<string.h>

int main()
{
	char a[100000];
	scanf("%s",a);
	int i,l=strlen(a),ctr=0,ctr2=0;
	for(i=0;i<l;i++)
	{
		if(a[i]=='+')
			ctr++;
		else
			ctr2++;
	}
	if(ctr==ctr2&&ctr%2==0&&ctr2%2==0)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}


