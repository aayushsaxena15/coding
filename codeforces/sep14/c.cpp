#include<iostream>
#include<cmath>
using namespace std;
long long int max(long long int a,long long int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int main()
{
	long long int a,b;
	cin>>a>>b;
	if(a==1&&b==1)
		cout <<1<<endl;
	else 
	{
		int i,x,y,ans=100000,temp;
		for(i=1;i<=b;i++)
		{
			if(b%i==0)
			{
				x=i;
				y=(3-b/x)/2;
				temp=x+y;
				if(temp<ans)
					ans=temp;
			}
		}
		//float g=ceil(b/a),h=ceil(a/b);
		cout<<ans<<endl;

	}
	return 0;

}
