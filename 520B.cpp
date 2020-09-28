#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=0;
    cin>>n>>m;
    if(n>=m)
        cout<<n-m;
    else
        {while(n<m)
        {
            if(m%2==0)
                m=m/2;
            else
                m+=1;
            i++;

        }
        cout<<i+n-m;}


}
