#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        long int arr[n+n];
        for(i=0;i<n*2;i++)
            cin>>arr[i];
        sort(arr,arr+n+n);
        cout<<arr[n]-arr[n-1]<<endl;
    }
}
