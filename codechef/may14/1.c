#include<stdio.h>
int main()
{
	long long int a,i=0;
	int flag=0;
	scanf("%lld",&a);
	if(a%3==0)
		flag=1;
	else if(((a/3)%2==0)&&a%3==1)
		flag=1;
	if(flag==1)
		printf("yes\n");
	else
		printf("no\n");
	return 0;
}
