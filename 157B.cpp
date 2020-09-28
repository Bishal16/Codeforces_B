#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double pi=3.1415926536,s=0;
    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=n-1;i>0;i-=2)
    {
        s=s+(pi*arr[i]*arr[i])-(pi*arr[i-1]*arr[i-1]);
    }
    if(n%2!=0)
        s=s+pi*arr[0]*arr[0];
        cout<<s;
}
