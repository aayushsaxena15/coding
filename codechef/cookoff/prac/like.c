#include<stdio.h>
int main()
{   
    int t;
    scanf("%d",&t);
    while(t--)
    {  
        long long l,d,s,c,prod,i;
        scanf("%lld %lld %lld %lld",&l,&d,&s,&c);
        prod=s;
        for(i=0;i<d;i++)
        {   if(prod >= l)
            {  
                printf("ALIVE AND KICKING\n");
                break;
            }
            else
                prod*=(1+c);
        }
        if(i==d)
            printf("DEAD AND ROTTING\n");
    }
    return 0;
}
