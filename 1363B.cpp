#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,a,b,c,p=-1;
    string s;
    cin>>n;
    while(n--){
        cin>>s;
        l=s.length();
        for(i=0;i<l;i++)//010
        {
            a=0;b=0;c=0;
            for(j=0;j<l-2;j++)
                if(s[i]=='0')
                    {a=1;break;}
            for(j=j+1;j<l-1;j++)
                if(s[i]=='1')
                    {b=1;break;}
            for(j=j+1;j<l;j++)
                if(s[i]=='0')
                    c=1;
            if(a==1 && b==1 && c==1 )

        }
