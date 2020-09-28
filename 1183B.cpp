#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,p,i;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        p=arr[0]+k;
        for(i=0;i<n;i++)
            if( (arr[i]-p<=k && arr[i]-p>=0) || (p-arr[i]<=k && p-arr[i]>=0))
                ;
            else
                {cout<<-1<<endl;
                p=0;break;}
        if(p!=0)
            cout<<p<<endl;
    }
}
