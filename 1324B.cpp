#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,p1,p2,ft,mp;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            p1=i;mp=-1;p2=-1,ft=0;
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                    p2=j;
                if(ft==0)
                    {mp=j;ft++;}
            }
            if(p1!=-1 && p2!=-1 && mp>p1 && mp<p2)
                {cout<<"YES"<<endl;ft=-5;break;}
        }
        if(ft!=-5)
            cout<<"NO"<<endl;
    }
}


