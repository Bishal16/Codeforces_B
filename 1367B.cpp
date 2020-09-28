#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,arr[50],i,j,c,odd,even;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        c=0,odd=0,even=0;
        for(j=0;j<n;j++)
        {
            cin>>arr[j];
            if(arr[j]%2 != j%2)
            {
                c++;
                if (arr[j]%2==0)
                    even++;
                else if (arr[j]%2!=0)
                    odd++;
            }
        }
       // if(c==0 )
         //   cout<<0<<endl;
        if(c%2==0 && even==odd)
            cout<<c/2<<endl;
        else if(c%2==0 && even!=odd)
            cout<<-1<<endl;
        else if(c%2!=0)
            cout<<-1<<endl;
    }
}
