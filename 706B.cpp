#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,q,i,m;
    cin>>n;
    long int x[n];
    for(i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>m;
        cout<<upper_bound(x,x+n,m)-x<<endl;
    }

}
