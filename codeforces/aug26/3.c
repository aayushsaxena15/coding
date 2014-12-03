#include<stdio.h>
void merge(int [],int ,int ,int );
void part(int [],int ,int );
int main()
{
    int arr[300001];
    int i,size;
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    part(arr,0,size-1);
    int sum=0;
    for(i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }
    int final=sum;
    for(i=0;i<size-1;i++)
    {
        sum=sum-arr[i];
        final=final+arr[i]+sum;
    }
    printf("%d\n",final);
    return 0;
}


void part(int arr[],int min,int max)
{
    int mid;
    if(min<max)
    {
        mid=(min+max)/2;
        part(arr,min,mid);
        part(arr,mid+1,max);
        merge(arr,min,mid,max);
    }
}


void merge(int arr[],int min,int mid,int max)
{
    int tmp[30];
    int i,j,k,m; 
    j=min;
    m=mid+1;
    for(i=min; j<=mid && m<=max ; i++)
    {
        if(arr[j]<=arr[m])
        {
            tmp[i]=arr[j];
            j++;
        }
        else
        {
            tmp[i]=arr[m];
            m++;
        }
    }
    if(j>mid)
    {
        for(k=m; k<=max; k++)
        {
            tmp[i]=arr[k];
            i++;
        }
    }
    else
    {
        for(k=j; k<=mid; k++)
        {
            tmp[i]=arr[k];
            i++;
        }
    }
    for(k=min; k<=max; k++)
        arr[k]=tmp[k];
}
