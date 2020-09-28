#include <iostream>

using namespace std;

int main()
{
    long long int t,i,j,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n%4!=0)
            cout<<"NO"<<endl;
        else
            {
                cout<<"YES"<<endl;
                for(j=2;j<=n;j+=2)
                    cout<<j<<" ";
                for(j=1;j<n-2;j+=2)
                    cout<<j<<" ";
                cout<<n-1+(n/2)<<endl;
            }

    }
}
