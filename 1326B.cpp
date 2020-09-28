#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,i,m;
    cin>>n;
    long int b[n],x[n],a[n];
    for(i=0;i<n;i++)
        cin>>b[i];
    //x[0]=0;
    //a[0]=b[0]+x[0];
    m=0;
   // cout<<a[0]<<" ";
    for(i=0;i<n;i++)
    {

        x[i]=m;

        a[i]=b[i]+x[i];
        cout<<a[i]<<" ";
        if(a[i]>=m)
            m=a[i];
    }
}
