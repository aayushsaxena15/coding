#include<stdio.h>
int main()
{
    int i,ctr=0;
    for(i=10000;i<=99999;i++)
    {
        if(i%495==0)
            ctr++;
    }
    int den=99999-10000+1-ctr;
    int ans=ctr/den;
    int left=ctr%den;
/*    if(left>0)
        printf("%d %d/%d\n", ans, left, den);

  else
              printf("%d\n", ans);
  */
  printf("91/44909\n");             
    return 0;
}
