#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,f,i,c=0,ng=0,z=0;
    cin>>n;
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
            ng++;
        else if(arr[i]==0)
            z++;
    }

    f=0;
    if(ng%2==0)
        for(i=0;i<n;i++)
        {
            if(arr[i]<-1)
                c=c+(arr[i]*-1)-1;
            else if(arr[i]==0)
                c++;
            else if(arr[i]>1)
                c=c+arr[i]-1;//cout<<c<<" :"<<arr[i]<<" ";
        }
    else
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
                c++;
            else if(arr[i]>1)
                c=c+arr[i]-1;
            else if(arr[i]<=-1 && f==0)
                {c=c+(arr[i]*-1)+1;f++;}
            else if(arr[i]<-1)
                c=c+(arr[i]*-1)-1;
        }
    if(ng%2!=0 && z>0)
        cout<<c-2;
    else
        cout<<c;
}
