#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,i,j,tw,th;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        tw=0;th=0;
        while(n%2==0)
        {
            n=n/2;
            ++tw;}

        while(n%3==0)
        {   n=n/3;
            ++th;}

        if(n==1 && th>=tw)
            cout<<2*th-tw<<endl;
        else
            cout<<-1<<endl;
    }
}






