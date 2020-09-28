#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i;
    cin>>n;
    long int x[n],y[n],m=0,p,mn;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        if((x[i]+y[i])>m)
            {m=x[i]+y[i];}
    }

    cout<<m;
}

