#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i;
    cin>>n>>k;
    string s;
    cin>>s;

    if(k==0){cout<<s;return 0;}
    if(n==1)
    {
        if(k==0)cout<<s[0];
        else cout<<0;
        return 0;
    }
    if(s[0]=='1')
    {
        for(i=0;i<n;i++)
        {
            if(i==0 && k!=0) cout<<1;

            else if(i<=k)
                cout<<0;
            else
                cout<<s[i];
            if(s[i]=='0')
                k++;
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(i==0 && k!=0) cout<<1;

            else if(i<k)
                cout<<0;
            else
                cout<<s[i];
            if(s[i]=='0'  ) k++;
        }
    }//cout<<k;
}
