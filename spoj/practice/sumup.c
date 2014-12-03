#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        float ans=1-(1/(pow(n,2)+n+1));
        printf("%0.5f\n",ans/2);
    }
    return 0;
}

