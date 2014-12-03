#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int s[n],min=1000000000;
        for(i=0;i<n;i++)
            cin>>s[i];
        sort(s,s+n);
        for(i=0;i<=n-k;i++)
        {
            if((s[i+k-1]-s[i])<min)
            {
                    min=s[i+k-1]-s[i];
            }
        }
        cout<<min<<endl;
    }
    return 0;
}
