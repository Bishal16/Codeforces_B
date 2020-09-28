#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,c,c1=0,k;
    cin>>n>>m;string pp,p="",q="",s[n],r;
    for(i=0;i<n;i++)
        cin>>s[i];
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            r=s[j];
            reverse( r.begin(),r.end() );
            if(s[i]==r)
                {q=q+s[i];c++;break;}
        }
        p="";
        if(c1==0 && c==0)
        {
            p=s[i];
            reverse(p.begin(),p.end());

            if(s[i]==p )
                {pp=s[i];c1++;}
        }
    }//cout<<p<<endl;
    cout<<2*q.length()+pp.length()<<endl;
    cout<<q<<pp;
    reverse(q.begin(),q.end());
    cout<<q;
}
