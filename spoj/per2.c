#include<stdio.h>
int main()
{
    while(1)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            int i,a[100001],f=0;
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            for(i=0;i<n;i++)
            {
                if(a[a[i]-1]==i+1)
                    f++;
            }
            if(f==n)
                printf("ambiguous\n");
            else
                printf("not ambiguous\n");
        }
    }
    return 0;
}





