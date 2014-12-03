#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,len,count;
    char s[100001],temp;
    while(scanf("%s",s) != EOF)
    {
        len = strlen(s);
        if(len == 3)
        {
            printf("%s\n",s);
            continue;
        }
        temp = s[0];
        count = 1;
        int j;
        for(i = 1; i <= len; i++)
        {
            if(temp == s[i])
            {
                count++;
            }
            else if(temp != s[i])
            {
                if(count > 3) printf("%d!%c",count,temp);
                else
                {

                    for(j = 1; j <= count; j++)
                        printf("%c",temp);
                }
                count = 1;
                temp = s[i];
            }
        }

        printf("\n");
    }
}
