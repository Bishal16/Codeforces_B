#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,i,p,m,s=0,c;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    m=150000000;
    for(i=0;i<k+1;i++)
        s=s+a[i];
    c=0;p=0;m=s;
    for(i=k;i<n;i++)
    {
        s=s+a[i]-a[c];

        c++;//cout<<"s";
        if(s<m)
            {m=s;//cout<<s;
            p=i-(k-1);}
    }
    cout<<p+1;
}
