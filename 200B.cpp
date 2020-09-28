
#include <iostream>

using namespace std;

int main()
{
    float n,s=0;
    int arr[100],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        s=s+arr[i];
    }
    cout<<s/n;
}
