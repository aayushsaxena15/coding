#include<stdio.h>
#include<math.h>

int main()
{
    int initial,b,final;
    while((scanf("%d%d%d",&initial,&b,&final))&&((initial!=0)||(b!=0)||(final!=0)))
    {
        if ((initial-final)%b!=0)
            printf("No accounting tablet\n");
        else
        {
            if (abs(final-initial)%(b*3)==0)
               printf("%d\n",abs(final-initial)/(b*3));
            else
                printf("%d\n",abs(final-initial)/(b*3)+1);         
        }           
    }
}
