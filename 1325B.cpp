#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,i,j;

    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        long long int arr[n],c=0;
        for(j=0;j<n;j++)
            cin>>arr[j];
        sort(arr,arr+n);
        for(j=0;j<n-1;j++)
            if(arr[j+1]==arr[j])
                c++;
        cout<<n-c<<endl;
    }
}
