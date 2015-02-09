#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        vector<long long> v;
        int n,k,i;
        scanf("%d%d",&n,&k);
        long long b,sig=1,answer=0;
        v.push_back(k);
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&b);
            v.push_back(b);
        }
        sort(v.rbegin(),v.rend());
        while(sig<=v[0])
            sig<<=1;
        sig>>=1;
        for(int kk=0;sig>=1;sig>>=1)
        {
            int i=kk;
            while(i<n && (v[i]&sig)==0)
                i++;
            if(i>=n)
                continue;
            swap(v[kk],v[i]);
            for(int j=0;j<n;++j)
            {
                if(j!=kk && (v[j]&sig)!=0)
                    v[j]=v[j]^v[kk];
            }
            kk++;
        }
        for(int i=0;i<n;i++)
            answer=answer^v[i];
        printf("%lld\n",answer);
    }
    return 0;
}
