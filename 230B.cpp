#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,sq,a[1000000]={0};
    cin>>t;

    for(int i=2;i<1000000;i++)
        for(int j=2;i*j<1000000;j++)
            if(a[i*j]==0)
                a[i*j]=1;

    for(int i=0;i<t;i++)
    {

        cin>>n;
        if(n==1){cout<<"NO"<<endl; continue;}
        sq=sqrt(n);
        if(sq*sq==n && a[sq]==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}


//sieve of Eratosthenes
