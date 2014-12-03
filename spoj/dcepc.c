#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k;
        scanf("%lld%lld",&n,&k);

        int ctr=0;
            if (k==1)
                printf("Male\n");
            else if (k==2)
                printf("Female\n");
            else
            {
                k-=1;
                while (k>1)
                {
                    if (k%2!=0)
                        ctr+=1;
                    k=k/2;
                }
                if (ctr%2==0)
                    printf("Female\n");
                else
                    printf("Male\n");
            }
    }
    return 0;
}

