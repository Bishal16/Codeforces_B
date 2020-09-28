#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,i,b,c;

        cin>>n>>a;
        int arr[n+1];
        for(i=1;i<=n;i++)
            cin>>arr[i];
        b=a-1;c=0;
        if(n-a>b)
            b=n-a;
        for(i=1;i<=b;i++)
        {
            if(arr[a-i]==1 && arr[a+i]==1 && a-i>=1 && a+i<=n)
                c=c+2;
             else if((arr[a-i]==1 && a-i>=1) && (a+i>n))
                c++;
            else if((arr[a+i]==1 && a+i<=n) && (a-i<1))
                c++;
        }
        if(arr[a]==1)
            c++;
        cout<<c;

}
