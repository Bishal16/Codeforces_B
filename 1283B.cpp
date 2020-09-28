#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,k,i,c;
    cin>>t;
    while(t--){
        cin>>n>>k;
        c=(n/k)*k;
        if((n%k) >= k/2)
            c=c+k/2;
        else
            c=c+n%k;
        cout<<c<<endl;
    }
}
