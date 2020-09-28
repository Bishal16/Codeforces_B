#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,x,y,i;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x==y)
            cout<<"YES"<<endl;
       // else if( x>1 && x%2!=0 && x<y && x==(x-1)*3/2 &&)
       else if((x==3 && y>3) || (x==2 && y>3) || (x==1 && y>1))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        //else if(x%2==0 && x*3/2 > 1000000000 && x<y)
    }
}
