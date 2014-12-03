#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        char s[50001];
        scanf("%d%s",&n,s);
        int l=strlen(s);
        printf("%c\n",s[l-1]);
    }
    return 0;
}
