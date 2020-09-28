#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin>>n;
    long int i,l=n.length(),p=-1,v,v1;
    for(i=0;i<l-1;i++)
    {
        v=n[i]-'0';v1=n[l-1]-'0';
        if(v1>v && v%2==0)
        {
            p=i;
            break;
        }
    }
    if(p==-1)
    {
        for(i=l-2;i>=0;i--)
        {
            v=n[i]-'0';
            if(v%2==0)
            {
                p=i;
                break;
            }
        }
    }
    swap(n[l-1],n[p]);
    if(p==-1)
        cout<<-1;
    else
        cout<<n;
}
