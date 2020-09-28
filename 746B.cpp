#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1="";
    int n,i,j=0;
    cin>>n;cin>>s;
    for(i=n-1;i>=0;i--)
    {
        if((i+1)%2==0)
            s1=s[j]+s1;
        else
            s1=s1+s[j];
        j++;
    }
    cout<<s1;


}
