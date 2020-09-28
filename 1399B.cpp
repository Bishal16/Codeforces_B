#include<bits/stdc++.h>
using namespace std;

int main()
{
long long int n,i,t,c,am,bm,d;
cin>>t;
while(t--)
{
    cin>>n;
    long long int a[n],b[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cin>>b[i];//cout<<endl;
    am=*min_element(a,a+n);
    bm=*min_element(b,b+n);//cout<<"min :"<<am<<" "<<bm<<endl;
    c=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>am && b[i]>bm)
        {
            d=min( a[i]-am , b[i]-bm);
            c=c+d;
            a[i]=a[i]-d;
            b[i]=b[i]-d;//cout<<"kk";
        }
        if(a[i]>am)
        {

            c=c+a[i]-am;//cout<<"ll";
            a[i]=am;
        }
        if(b[i]>bm)
        {
            c+=b[i]-bm;
            b[i]=bm;
            //cout<<"d"<<b[i]<<bm<<i<<"d";
        }

    }
    cout<<c<<endl;
}
}
