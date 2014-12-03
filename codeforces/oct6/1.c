#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char a,b[101];
    scanf("%c",&a);
    scanf("%s",b);
    if(a=='R')
    {
        for(i=0;i<strlen(b);i++)
        {
            if(b[i]=='w')
                printf("q");
            else if(b[i]=='e')
                printf("w");
            else if(b[i]=='r')
                printf("e");
            else if(b[i]=='t')
                printf("r");
            else if(b[i]=='y')
                printf("t");
            else if(b[i]=='u')
                printf("y");
            else if(b[i]=='i')
                printf("u");
            else if(b[i]=='o')
                printf("i");
            else if(b[i]=='p')
                printf("o");
            else if(b[i]=='s')
                printf("a");
            else if(b[i]=='d')
                printf("s");
            else if(b[i]=='f')
                printf("d");
            else if(b[i]=='g')
                printf("f");
            else if(b[i]=='h')
                printf("g");
            else if(b[i]=='j')
                printf("h");
            else if(b[i]=='k')
                printf("j");
            else if(b[i]=='l')
                printf("k");
            else if(b[i]==';')
                printf("l");
            else if(b[i]=='x')
                printf("z");
            else if(b[i]=='c')
                printf("x");
            else if(b[i]=='v')
                printf("c");
            else if(b[i]=='b')
                printf("v");
            else if(b[i]=='n')
                printf("b");
            else if(b[i]=='m')
                printf("n");
            else if(b[i]==',')
                printf("m");
            else if(b[i]=='.')
                printf(",");
            else if(b[i]=='/')
                printf(".");
            else
                printf("%c",b[i]);
        }
        printf("\n");
    }
    else
    {
        for(i=0;i<strlen(b);i++)
        {
            if(b[i]=='q')
                printf("w");
            else if(b[i]=='w')
                printf("e");
            else if(b[i]=='e')
                printf("r");
            else if(b[i]=='r')
                printf("t");
            else if(b[i]=='t')
                printf("y");
            else if(b[i]=='y')
                printf("u");
            else if(b[i]=='u')
                printf("i");
            else if(b[i]=='i')
                printf("o");
            else if(b[i]=='o')
                printf("p");
            else if(b[i]=='a')
                printf("s");
            else if(b[i]=='s')
                printf("d");
            else if(b[i]=='d')
                printf("f");
            else if(b[i]=='f')
                printf("g");
            else if(b[i]=='g')
                printf("h");
            else if(b[i]=='h')
                printf("j");
            else if(b[i]=='j')
                printf("k");
            else if(b[i]=='k')
                printf("l");
            else if(b[i]=='l')
                printf(";");
            else if(b[i]=='z')
                printf("x");
            else if(b[i]=='x')
                printf("c");
            else if(b[i]=='c')
                printf("v");
            else if(b[i]=='v')
                printf("b");
            else if(b[i]=='b')
                printf("n");
            else if(b[i]=='n')
                printf("m");
            else if(b[i]=='m')
                printf(",");
            else if(b[i]==',')
                printf(".");
            else if(b[i]=='.')
                printf("/");
            else
                printf("%c",b[i]);
        }

    printf("\n");
}
    return 0;
}
