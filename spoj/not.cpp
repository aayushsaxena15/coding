#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
            break;
        else
        {
            vector<int> d(n);
            for(int i=0;i<n;++i)
                cin >> d[i];
            sort(d.begin(), d.end());
            int ans=0;
            for(int i=0;i!=n-2;++i)
            {
                for(int j=i+1;j!=n-1;++j)
                    ans+=d.end()-upper_bound(d.begin() + j + 1, d.end(), d[i] + d[j]);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}

