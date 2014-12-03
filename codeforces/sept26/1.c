#include<stdio.h>
int main()
{
    int a,i,b,c,d,e,f,ctr[10];
    for(i=1;i<=9;i++)
    {
        ctr[i]=0;
    }
    for(i=1;i<=6;i++)
    {
        scanf("%d",&a);
        ctr[a]++;
    }
    for(i=1;i<=9;i++)
    {
        printf("%d\n",ctr[i]);
    }
    int flag=0,temp[2],j=0,ef=0;
    for(i=1;i<=9;i++)
    {
        if(ctr[i]==4)
            flag=1;
        else if(ctr[i]>0&&ctr[i]<4)
            temp[j++]=i;
        else if (ctr[i]==2)
            ef=1;
    printf("%d\n",flag);
    }
    printf("%d\n",flag);
    if(flag==0)
        printf("Alien\n");
    else if(flag==1&&(ctr[temp[0]]==ctr[temp[1]]))
        printf("Bear\n");
    else if(ef==1||flag==1)
        printf("Elephant\n");
    return 0;
}

