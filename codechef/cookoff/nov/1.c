#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[100001];
        int i,j,l,ans=0,flag[256];
        for(i=0;i<255;i++)
            flag[i]=0;
        scanf("%s",a);
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(flag[a[i]]!=1)
            {
                ans++;
                flag[a[i]]=1;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
