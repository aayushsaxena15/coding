#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,l,i,j,ctr[129];
    char a[100001];
    scanf("%d%d",&n,&k);
    scanf("%s",a);
    char ch=getchar();
    l=strlen(a);
    for(i=0;i<129;i++)
        ctr[i]=0;
    for(i=0;i<l;i++)
        ctr[a[i]]++;
    for(i=50;i<129;i++)
    {
        for(j=i+1;j<129;j++)
        {
            if(ctr[i]<ctr[j])
            {
                int temp=ctr[i];
                ctr[i]=ctr[j];
                ctr[j]=temp;
            }
        }
    }
    int ans=0;
    for(i=50;i<129;i++)
    {
        if(ctr[i]>0&&ctr[i]<=k&&k>0)
        {
            ans=ans+(ctr[i]*ctr[i]);
        k=k-ctr[i];
      }
      else if(k<ctr[i]&&k>0)
      {
          ans=ans+(k*k);
          k=0;
      }
    }
    printf("%d\n",ans);
        return 0;
}
