#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,min,max,temp,n,b[200001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    min=1000000000;
    for(i=0;i<n;i++)
    {
        if(b[i]<min)
        {
            min=b[i];
        }
    }
    max=0;
    for(i=0;i<n;i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    long long int c1=0,c2=0;
    for(i=0;i<n;i++)
    {
        if(b[i]==min)
            c1++;
    }
    for(i=0;i<n;i++)
    {
        if(b[i]==max)
            c2++;
    }
    if(max==min)
    {
        printf("%d ",max-min);
        cout<<((n*(n-1)))/2<<endl;
    }
    else
    {

    printf("%d ",max-min);
    cout <<c1*c2<<endl;
    }
    return 0;
}






