#include<stdio.h>
#include<math.h>
int main()
{
    long long int n;
    while(1)
    {

        scanf("%lld",&n);
        if(n==0)
            break;
        else
        {
            int ctr=0,i;
            while (n%2 == 0)
            {           
                ctr+=1;
                n = n/2;
            }      
            if( ctr>0)
                printf("2^%d ",(ctr));

            for(i=3;i<=sqrt(n);i+=2)
            {         
                ctr=0;
                while (n%i == 0)
                {            
                    ctr+=1;
                    n = n/i;
                }   
                if (ctr>0)
                    printf("%d^%d ",i,ctr);
            }
            if (n > 2)
                printf("%lld^1",n);
            printf("\n");
        }
    }
    return 0;
}
