#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    while(1)
    {
        char a[5];
        scanf("%s",a);
        if(a[0]=='0'&&a[1]=='0'&&(a[3]-'0'==0))
            break;
        else
        {
            int n=((a[0]-'0')*10+(a[1]-'0'));
            int temp=a[3]-'0';
            while(temp--)
                n=n*10;

            int c=1;
            while(c<=n)
                c<<=1;
            int p=((n-(c>>1))<<1)+1;

            printf("%d\n",p);

        }
    }
    return 0;
}



