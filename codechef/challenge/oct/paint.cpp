#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,f=1,i,j,p;
        char c[100001],col;
        scanf("%d%d",&n,&m);
        for(i=1;i<=n;i++)
            c[i]=' ';
        for(i=1;i<=m;i++)
        {
            scanf("%c",&col);
            char e=getchar();
            scanf("%d",&p);
            c[p]=e;
        }
//        for(i=1;i<=n;i++)
  //          printf("%d %c\n",i,c[i]);
            
        for(i=1;i<=n;i++)
        {
            if(c[i]>=65&&c[i]<=90)
            {
                j=i;
                break;
            }
        }
    //    printf("%d %c\n",j,c[j]);
        
        long long int ans=1;
        int k=j;
        char temp=c[j];
        for(i=j+1;i<=n;i++)
        {
            if(c[i]>=65&&c[i]<=90&&c[i]!=temp)
            {
                ans=((ans%1000000009)*((i-k)%1000000009))%1000000009;
                k=i;
                temp=c[i];
            }
            else if(c[i]>=65&&c[i]<=90)
                k=i;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
