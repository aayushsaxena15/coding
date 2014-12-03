#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    int ctr=1;
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char s[40];
        scanf("%s",s);
        int i,l=strlen(s),ctr1=0,ctr2=0,ctr3=0,ctr4=0,ctr5=0,ctr6=0,ctr7=0,ctr8=0;
        for(i=0;i<l-2;i++)
        {
            if(s[i]=='T'&&s[i+1]=='T'&&s[i+2]=='T')
                ctr1++;
            else if(s[i]=='T'&&s[i+1]=='T'&&s[i+2]=='H')
                ctr2++;
            else if(s[i]=='T'&&s[i+1]=='H'&&s[i+2]=='T')
                ctr3++;
            else if(s[i]=='T'&&s[i+1]=='H'&&s[i+2]=='H')
                ctr4++;
            else if(s[i]=='H'&&s[i+1]=='T'&&s[i+2]=='T')
                ctr5++;
            else if(s[i]=='H'&&s[i+1]=='T'&&s[i+2]=='H')
                ctr6++;
            else if(s[i]=='H'&&s[i+1]=='H'&&s[i+2]=='T')
                ctr7++;
            else if(s[i]=='H'&&s[i+1]=='H'&&s[i+2]=='H')
                ctr8++;
        }
        printf("%d %d %d %d %d %d %d %d %d\n",ctr++,ctr1,ctr2,ctr3,ctr4,ctr5,ctr6,ctr7,ctr8);
    }
    return 0;
}
