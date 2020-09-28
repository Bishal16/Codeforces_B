#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,arr[50],i,j,mn,p;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
            cin>>arr[j];

        sort(arr,arr+n);
        mn=1001;
        for(j=0;j<n-1;j++)
        {
            if(arr[j+1]-arr[j] < mn)
            {
                p=j;
                mn=arr[j+1]-arr[j];
                if(mn==0)
                    break;
            }
        }
        cout<<mn<<endl;
    }
}
