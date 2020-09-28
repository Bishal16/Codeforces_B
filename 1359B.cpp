
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,x,y,i,j,r,p,c;
    cin>>t;
    while(t--){
        cin>>n>>m>>x>>y;
        char nm[n][m];
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                cin>>nm[i][j];
        r=1;p=0;
        if(y<2*x)
            r=2;
        for(i=0;i<n;i++)
        {
            c=0;
            for(j=0;j<m;j++){
                if(nm[i][j]=='.')
                {
                    c++;//cout<<p<<"c"<<endl;
                }//cout<<j<<m<<endl;
                if(nm[i][j]=='*' || j==m-1)
                {
                    if(r==1)
                        {p=p+x*c;}//cout<<p<<"r1"<<endl;}
                    else if(r==2)
                        {
                            p=p+c/2*y+(c%2)*x;//cout<<p<<"r2"<<endl;
                        }
                    c=0;
                }
            }
        }
        cout<<p<<endl;
    }
}
