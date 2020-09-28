#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,t,c,j;
    cin>>t;
    while(t--){
        cin>>n;c=0;
        int arr[2*n];
        for(i=0;i<2*n;i++)
            cin>>arr[i];

        for(i=0;i<2*n;i++)
        {
            for(j=i+1;j<2*n;j++)
                {
                    if(arr[i]!=0)
                    {
                        if(arr[i]==arr[j])
                        {
                            arr[j]=0;
                            c++;
                            break;
                        }
                    }

                }
            if(c==n)
                break;
        }

    for(i=0;i<2*n;i++)
        if(arr[i]!=0)
            cout<<arr[i]<<" ";
    cout<<endl;
    }

}
