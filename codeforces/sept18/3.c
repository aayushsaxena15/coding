#include<stdio.h>
typedef struct pair
{
    int x,y,sum;

}pair;
void merge(pair [],int ,int ,int );
void part(pair [],int ,int );
int main()
{
    int ans=0,n,m,k,a[5001],i,j,ind=0;
    scanf("%d%d%d",&n,&m,&k);
    pair p[100000];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((j>=i)&&(j-i==m-1))
            {
                p[ind].x=a[i];
                p[ind].y=a[j];
                p[ind++].sum=((a[j]-a[i]+1)*(a[i]+a[j]))/2;
            }
        }
    }
    part(p,0,ind-1);
    for(i=0; i<ind; i++)
    {
        if(i==k)
            break;
        ans=ans+p[i].sum;
    }
    printf("%d\n",ans);
    return 0;
}


void part(pair arr[],int min,int max)
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


void merge(pair arr[],int min,int mid,int max)
{
    int tmp[100000];
    int i,j,k,m; 
    j=min;
    m=mid+1;
    for(i=min; j<=mid && m<=max ; i++)
    {
        if(arr[j].sum>=arr[m].sum)
        {
            tmp[i]=arr[j].sum;
            j++;
        }
        else
        {
            tmp[i]=arr[m].sum;
            m++;
        }
    }
    if(j>mid)
    {
        for(k=m; k<=max; k++)
        {
            tmp[i]=arr[k].sum;
            i++;
        }
    }
    else
    {
        for(k=j; k<=mid; k++)
        {
            tmp[i]=arr[k].sum;
            i++;
        }
    }
    for(k=min; k<=max; k++)
        arr[k].sum=tmp[k];
}



