#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,l,r,i,p1=0,p2=0;
    cin>>n>>l>>r;
    for(i=0;i<l || i<r;i++)
    {
        if(i<l)
            p1=p1+pow(2,i);
        if(i<r)
            p2=p2+pow(2,i);
    }
    cout<<p1+(n-l)<<" "<<fixed << setprecision(0)<<(p2+(n-r)*pow(2,r-1));
}
