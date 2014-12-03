#include<stdio.h>
#include<string.h>
int binaryReverse(int toReverse) 
{
    int reversed = 0;
    while(toReverse > 0) {
        reversed *= 2;
        reversed += toReverse % 2;
        toReverse /= 2;
    }
    return reversed;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) 
    {
        int a;
        scanf("%d",&a);

        if(a%2==0)
        {
            printf("%d\n",binaryReverse(a));
        } 
        else {
            printf("%d\n",a);
        }
    }
    return 0;
}
