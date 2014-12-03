#include<stdio.h>
#include<math.h>
int main()
{
    int ctr=1;
    while(1)
    {
        long n;
        scanf("%ld",&n);
        if(n==0)
            break;
        else
        {
            printf("Case %d, N = %ld, # of different labelings = %0.0lf\n",ctr++,n,(pow(n,n-2)));
        }
    }
    return 0;
}
    

