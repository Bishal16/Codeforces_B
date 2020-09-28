#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l,i;
    double m=0;
    cin>>n>>l;
    long long int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);
    for(i=0;i<n-1;i++)
        if(arr[i+1]-arr[i] >= m)
            m=arr[i+1]-arr[i];
    m=m/2.0;
    if(l-arr[n-1] > m)
        m=l-arr[n-1];
    if(arr[0] > m)
        m=arr[0];
    std::cout << std::fixed << std::setprecision(9);
    std::cout << m << std::endl;
}

//46 615683844
