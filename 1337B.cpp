
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t,x,n,m,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>n>>m;
        while(x>20 && n>0)
        {
            x=x/2+10;
            n--;
        }
        while(m>0)
        {
            x=x-10;
            m--;
            if(x<=0)
                break;
        }
        if(x<=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
