#include<stdio.h>
#include<string.h>
int len;
char a[21];
long long int dp[6000];
long long int solve(int i)
{
    if(i>=len)
        return 1;
    if (dp[i])
        return dp[i];
    if(a[i]=='0')
        return 1;
    long long int ret = 0;
    ret += solve(i+1);
    if(i+1<len && 10*(a[i]-'0')+(a[i+1]-'0')<=20) 
        ret += solve(i+2);
    return dp[i]=ret;
}
int main()
{
    scanf("%s",a);
    len=strlen(a);
    printf("%lld\n",solve(0));
    return 0;
}

