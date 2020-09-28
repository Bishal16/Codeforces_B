
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,c=0;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i-1]+arr[i]<k && i>0){
            c=c+k-(arr[i-1]+arr[i]);
            arr[i]=arr[i]+k-(arr[i-1]+arr[i]);
        }
    }
    cout<<c<<endl;
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
}

