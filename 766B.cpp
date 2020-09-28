#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c=0;
    cin>>n;
    long long int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<n-2;i++)
        if(arr[i]+arr[i+1]>arr[i+2])
            {cout<<"YES";c++;break;}
    if(c==0)cout<<"NO";
}

