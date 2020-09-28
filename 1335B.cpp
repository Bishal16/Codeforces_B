#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a,b,b1,n1,i,k;
    string s="",s1;
    char j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>a>>b;
        b1=b,n1=n;
        if(n%a==0)
            n=n/a;
        else
            n=n/a + 1;

        for(j='a';b1>0;j++)
        {
            s=s+j;
            b1--;
        }
        j--;
//cout<<s<<endl;
        for(k=0;k<a-b;k++)
            s=s+j;
//cout<<s<<endl<<s.length()<<endl;
       s1=s;
       while(n>1)
       {
            s=s+s1;
            n--;
       }//cout<<s<<endl<<s.length()<<endl;
      s=s.substr(0,n1);
        cout<<s<<endl;
        s="";
    }
}
