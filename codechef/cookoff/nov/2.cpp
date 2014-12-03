#include<iostream>
using namespace std;
int check(string s)
{
    int i,j,ctr=0;
    i=0;
    j=s.size()-1;
    while(i<j)
    {
        if (s[i]==s[j])
        {
            i++; 
            j--;
        }
        else
        {
            ctr++;
            if(ctr>1)
                 break;
            if(s[i+1]==s[j]&&((i+2 >= j-1)||s[i+2]==s[j-1]))
                i++;
            else if (s[j-1]==s[i])
                j--;
            else
            {
                ctr++;
                break;
            }
        }
    }  
    if((ctr == 1) || (ctr == 0))
        return 1;
     else 
         return 0;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        if(check(a))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

