#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,i,a[30],b[30],j,temp,s,c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        s=0;c=0;
        for(j=0;j<n;j++)
            cin>>a[j];
        for(j=0;j<n;j++)
            cin>>b[j];
        sort(a,a+n);
        sort(b,b+n, greater<int>());

//        for(j=0;j<n;j++)
//            cout<<a[j]<<" ";
//            cout<<endl;
//        for(j=0;j<n;j++)
//            cout<<b[j]<<" .";

        for(j=0;c<k;j++)
        {
            if(b[j]>a[j])
            {
                temp=a[j];
                a[j]=b[j];
                b[j]=temp;
                c++;
            }
            else
                break;

        }
        for(j=0;j<n;j++)
            s=s+a[j];
        cout<<s<<endl;

    }

}
