#include<stdio.h>
#include<math.h>
int main()
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
            break;
        else
        {
            printf("%d\n",(int)(log(n)/log(2)));
        }
    }
    return 0;
}
