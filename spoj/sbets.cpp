#include<iostream>
#include<string>
#include<map>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string team1,team2,winner="";
        int g1,g2,i,max=0;
        map<string,int>a;
        map<string,int>b;
        for(i=1;i<=16;i++)
        {
            cin>>team1;
            cin>>team2;
            scanf("%d%d",&g1,&g2);
            if(g1>g2)
            {
                a[team1]++;
                b[team2]--;
                if(max<(a[team1]+b[team1]))
                {
                    max=a[team1];
                    winner=team1;
                }
            }
            else
            {
                a[team2]++;
                b[team1]--;
                if(max<a[team2]+b[team2])
                {
                    max=a[team2];
                    winner=team2;
                }
            }
        }
        cout<<winner<<endl;
    }
    return 0;
}
