#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,d,m,i;
    cin>>n>>d>>m;
    int x[m],y[m];
    for(i=0;i<m;i++)
        cin>>x[i]>>y[i];
    for(i=0;i<m;i++)
    {
        if(x[i]>=d && x[i]<=n-d && y[i]>=x[i]-d && y[i]<=2*d+x[i]-d)
            cout<<"YES"<<endl;
        else if(x[i]>=n-d && x[i]<=n &&  y[i]>=x[i]-d && y[i]<= n- (x[i]-(n-d)) )
            cout<<"YES"<<endl;
        else if(x[i]<=d && x[i]>=0 && y[i]<=2*d+x[i]-d && y[i]>= d- (x[i]) )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
