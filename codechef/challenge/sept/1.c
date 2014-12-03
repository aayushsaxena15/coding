#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[100000];
        int i,l=1,ans;
        long long int n=1;
        scanf("%s",a);
        for(i=0;a[i]!='\0';i++)
        {
            if(l%2==1)
            {
                if(a[i]=='l')
                {
                    n=(2*n)%1000000007;
                }
                else
                {
                    n=((2*n)+2)%1000000007;
                }
                
            }
            else
            {
                if(a[i]=='l')
                {
                    n=((2*n)-1)%1000000007;
                }
                else
                {
                    n=((2*n)+1)%1000000007;
                }
            }
            l++;
        }
        printf("%lld\n",n%1000000007);
    }
    return 0;
}


