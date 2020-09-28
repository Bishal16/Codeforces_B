#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n,i,l,h,sl,sh,s=0;
    cin>>n;
    long int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    if(n==2)
        {cout<<0;return 0;}
    sort(arr,arr+n);
    l=arr[0];h=arr[n-1];sl=arr[1],sh=arr[n-2];


   if(h-sl>sh-l)
        cout<<sh-l;
    else
        cout<<h-sl;
}
