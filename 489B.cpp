#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,am[100],an[100],p,q,c=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>an[i];
    cin>>m;
    for(i=0;i<m;i++)
        cin>>am[i];
    sort(an,an+n);
    sort(am,am+m);
    if(n<=m)
        {p=n;q=m;}
    else
        {p=m;q=n;}

    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
        {
            if(n<=m)
                if(an[i]-am[j]==1 || am[j]-an[i]==1 || am[j]==an[i])
                {
                    am[j]=-100;
                    c++;
                    break;
                }
            if(n>m)
                if(am[i]-an[j]==1 || an[j]-am[i]==1 || am[i]==an[j])
                {
                    an[j]=-100;
                    c++;
                    break;
                }
        }
        cout<<c;
}
